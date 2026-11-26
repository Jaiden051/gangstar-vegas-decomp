// Decompiled from classes.dex (SourceFile: ad.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ad extends android.content.BroadcastReceiver {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    ad(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String Action;
      boolean BooleanExtra; // RETVAL
    
      Action = p1.getAction();
      if ( Action.equals("android.intent.action.TIME_SET") && Game.D )
        GL2JNILib.systemTimeChanged();
      if ( Action.equals("android.intent.action.USER_PRESENT") )
      {
        this.a.x = false;
        this.a.onResume();
        this.a.x = true;
      }
      Action.contains("android.intent.action.LOCALE_CHANGED");
      if ( Action.contains("android.intent.action.HDMI_PLUG") )
      {
        p1.getDataString();
        p1.getExtras();
        BooleanExtra = p1.getBooleanExtra("state", false);
        if ( BooleanExtra || BooleanExtra )
          Game.nativeOnHDMI(1);
        else
          Game.nativeOnHDMI(0);
      }
    }

}
