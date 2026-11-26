// Decompiled from classes.dex (SourceFile: AuthorizationClient$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$4 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.AuthorizationClient this$0;
    final java.util.ArrayList val$declinedPermissions;
    final java.util.ArrayList val$grantedPermissions;

    // Methods
    AuthorizationClient$4(com.facebook.AuthorizationClient p0, java.util.ArrayList p1, java.util.ArrayList p2)
    {
      super();
      this.this$0 = p0;
      this.val$grantedPermissions = p1;
      this.val$declinedPermissions = p2;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      com.facebook.Session$PermissionsPair v2; // RETVAL
      com.facebook.Session$PermissionsPair v3;
      try
      {
        v2 = Session.handlePermissionResponse(p0);
        v3 = v2;
        if ( v2 != null )
        {
          this.val$grantedPermissions.addAll(v2.getGrantedPermissions());
          this.val$declinedPermissions.addAll(v3.getDeclinedPermissions());
        }
      }
      catch ( Exception e )
      {
      }
    }

}
