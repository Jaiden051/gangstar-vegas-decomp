// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
import android.widget.Toast;
final class ag implements java.lang.Runnable {
    // Fields
    final java.lang.String a;

    // Methods
    ag(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.content.Intent v1;
      try
      {
        v1 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(this.a));
        if ( v1.resolveActivity(Game.getActivityContext().getPackageManager()) != null )
        {
          v1.replaceExtras(Game.az.getIntent());
          Game.az.startActivity(v1);
        }
        else
        {
          Toast.makeText(Game.getActivityContext(), "No web browser available.", 1).show();
        }
      }
      catch ( Exception v2 )
      {
        v2.printStackTrace();
      }
    }

}
