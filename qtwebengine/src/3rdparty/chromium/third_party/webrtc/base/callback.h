// This file was GENERATED by command:
//     pump.py callback.h.pump
// DO NOT EDIT BY HAND!!!

/*
 *  Copyright 2012 The WebRTC Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

// To generate callback.h from callback.h.pump, execute:
// /home/build/google3/third_party/gtest/scripts/pump.py callback.h.pump

// Callbacks are callable object containers. They can hold a function pointer
// or a function object and behave like a value type. Internally, data is
// reference-counted, making copies and pass-by-value inexpensive.
//
// Callbacks are typed using template arguments.  The format is:
//   CallbackN<ReturnType, ParamType1, ..., ParamTypeN>
// where N is the number of arguments supplied to the callable object.
// Callbacks are invoked using operator(), just like a function or a function
// object. Default-constructed callbacks are "empty," and executing an empty
// callback does nothing. A callback can be made empty by assigning it from
// a default-constructed callback.
//
// Callbacks are similar in purpose to std::function (which isn't available on
// all platforms we support) and a lightweight alternative to sigslots. Since
// they effectively hide the type of the object they call, they're useful in
// breaking dependencies between objects that need to interact with one another.
// Notably, they can hold the results of Bind(), std::bind*, etc, without
// needing
// to know the resulting object type of those calls.
//
// Sigslots, on the other hand, provide a fuller feature set, such as multiple
// subscriptions to a signal, optional thread-safety, and lifetime tracking of
// slots. When these features are needed, choose sigslots.
//
// Example:
//   int sqr(int x) { return x * x; }
//   struct AddK {
//     int k;
//     int operator()(int x) const { return x + k; }
//   } add_k = {5};
//
//   Callback1<int, int> my_callback;
//   cout << my_callback.empty() << endl;  // true
//
//   my_callback = Callback1<int, int>(&sqr);
//   cout << my_callback.empty() << endl;  // false
//   cout << my_callback(3) << endl;  // 9
//
//   my_callback = Callback1<int, int>(add_k);
//   cout << my_callback(10) << endl;  // 15
//
//   my_callback = Callback1<int, int>();
//   cout << my_callback.empty() << endl;  // true

#ifndef WEBRTC_BASE_CALLBACK_H_
#define WEBRTC_BASE_CALLBACK_H_


// This header is deprecated and is just left here temporarily during
// refactoring. See https://bugs.webrtc.org/7634 for more details.
#include "webrtc/rtc_base/callback.h"

#endif  // WEBRTC_BASE_CALLBACK_H_
