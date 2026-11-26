// Decompiled from classes.dex (SourceFile: AuthorizationClient$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$3 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.AuthorizationClient this$0;
    final java.util.ArrayList val$fbids;

    // Methods
    AuthorizationClient$3(com.facebook.AuthorizationClient p0, java.util.ArrayList p1)
    {
      super();
      this.this$0 = p0;
      this.val$fbids = p1;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      com.facebook.model.GraphUser v2;
      try
      {
        v2 = (com.facebook.model.GraphUser)p0.getGraphObjectAs(com.facebook.model.GraphUser.class);
        if ( v2 != null )
          this.val$fbids.add(v2.getId());
      }
      catch ( Exception e )
      {
      }
    }

}
