// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib;
final class g implements android.view.View.OnClickListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity a;

    // Methods
    g(com.gameloft.android.GAND.GloftGGSS.FacebookFriendsActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onClick(android.view.View p0)
    {
      String v2;
      if ( FacebookFriendsActivity.access$200(this.a) == 0 )
      {
        v2 = this.a.a();
        if ( v2 != "" )
        {
          FacebookAndroidGLSocialLib.sendGameRequestToFriends(v2, Game.getText());
          Game.onAddFriend(v2);
        }
      }
      this.a.b();
    }

}
