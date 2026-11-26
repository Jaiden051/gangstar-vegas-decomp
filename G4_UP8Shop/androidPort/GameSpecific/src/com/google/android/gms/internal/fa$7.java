// Decompiled from classes.dex (SourceFile: fa$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.webkit.ConsoleMessage;
class fa$7 {
    // Fields
    static final int[] a;

    // Methods
    static
    {
      a = new int[ConsoleMessage.MessageLevel.values().length];
      try
      {
        a[ConsoleMessage.MessageLevel.ERROR.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[ConsoleMessage.MessageLevel.WARNING.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[ConsoleMessage.MessageLevel.LOG.ordinal()] = 3;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[ConsoleMessage.MessageLevel.TIP.ordinal()] = 4;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        a[ConsoleMessage.MessageLevel.DEBUG.ordinal()] = 5;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
