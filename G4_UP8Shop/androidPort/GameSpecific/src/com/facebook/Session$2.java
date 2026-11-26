// Decompiled from classes.dex (SourceFile: Session$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$2 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.Session this$0;

    // Methods
    Session$2(com.facebook.Session p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      com.facebook.Session$PermissionsPair v2;
      Object v3; // RETVAL
      Object v4;
      v2 = Session.handlePermissionResponse(p0);
      if ( v2 != null )
      {
        v3 = Session.access$200(this.this$0);
        v4 = v3;
        synchronized ( v4 )
        {
          Session.access$302(
            this.this$0,
            AccessToken.createFromTokenWithRefreshedPermissions(
              Session.access$300(this.this$0),
              v2.getGrantedPermissions(),
              v2.getDeclinedPermissions()));
          this.this$0.postStateChange(Session.access$400(this.this$0), SessionState.OPENED_TOKEN_UPDATED, null);
          com.gameloft.android.DecompRT.monitorExit(v4);
        }
      }
    }

}
