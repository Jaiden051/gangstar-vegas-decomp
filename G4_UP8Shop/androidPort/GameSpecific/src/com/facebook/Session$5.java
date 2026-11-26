// Decompiled from classes.dex (SourceFile: Session$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$5 {
    // Fields
    static final int[] $SwitchMap$com$facebook$SessionState;

    // Methods
    static
    {
      $SwitchMap$com$facebook$SessionState = new int[SessionState.values().length];
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.CREATED.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.OPENING.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.CREATED_TOKEN_LOADED.ordinal()] = 3;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.OPENED.ordinal()] = 4;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.OPENED_TOKEN_UPDATED.ordinal()] = 5;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.CLOSED.ordinal()] = 6;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$com$facebook$SessionState[SessionState.CLOSED_LOGIN_FAILED.ordinal()] = 7;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
