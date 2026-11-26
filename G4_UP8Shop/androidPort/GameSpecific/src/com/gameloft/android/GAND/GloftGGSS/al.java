// Decompiled from classes.dex (SourceFile: al.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.widget.Toast;
final class al implements java.lang.Runnable {
    // Fields
    final int a;
    final java.lang.String b;
    final java.lang.String c;

    // Methods
    al(int p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void run()
    {
      android.content.Intent v1;
      android.content.Intent v2;
      try
      {
        if ( this.a == -1 )
        {
          Game.aq = null;
          v1 = new android.content.Intent(Game.az, com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity.class);
          v1.replaceExtras(Game.az.getIntent());
          v1.putExtra("option", 0);
          Game.az.startActivity(v1);
        }
        else if ( this.a == 1 )
        {
          Game.H = this.b;
          v2 = new android.content.Intent(Game.az, com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity.class);
          v2.replaceExtras(Game.az.getIntent());
          v2.putExtra("option", 0);
          Game.az.startActivity(v2);
        }
        else
        {
          Toast.makeText(Game.az, this.c, 1).show();
        }
      }
      catch ( Exception e )
      {
      }
    }

}
