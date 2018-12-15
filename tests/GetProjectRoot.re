/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */;

let get = () => {
  switch (Sys.getenv_opt("REASON_NATIVE_ROOT")) {
  | Some(dir) => dir
  | None =>
    failwith(
      "Expected `REASON_NATIVE_ROOT` environment variable to be set "
      ++ "before running tests.",
    )
  };
};
