// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.os.Build;
final class n extends java.lang.Thread {
    // Methods
    n()
    {
      super();
    }

    public final void run()
    {
      android.app.KeyguardManager v1;
      v1 = (android.app.KeyguardManager)Utils.getContext().getSystemService("keyguard");
      if ( Build.VERSION.SDK_INT < 16 )
      {
        while ( v1.inKeyguardRestrictedInputMode() )
        {
          try
          {
            Thread.sleep(100);
          }
          catch ( InterruptedException e )
          {
          }
        }
      }
      else
      {
        while ( v1.isKeyguardLocked() )
        {
          try
          {
            Thread.sleep(100);
          }
          catch ( InterruptedException e )
          {
          }
        }
      }
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.o(this));
    }

}
