#include <napi.h>

Napi::String Greet(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  return Napi::String::New(env, "Good day!");
}

Napi::Object init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "greet"), Napi::Function::New(env, Greet));
  return exports;
};

NODE_API_MODULE(hello_world, init);
