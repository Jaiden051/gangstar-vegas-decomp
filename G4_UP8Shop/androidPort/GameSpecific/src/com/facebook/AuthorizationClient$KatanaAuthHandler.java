// Decompiled from classes.dex (SourceFile: AuthorizationClient$KatanaAuthHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

abstract class AuthorizationClient$KatanaAuthHandler extends com.facebook.AuthorizationClient$AuthHandler {
    // Fields
    private static long serialVersionUID;
    final com.facebook.AuthorizationClient this$0;

    // Methods
    AuthorizationClient$KatanaAuthHandler(com.facebook.AuthorizationClient p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    protected boolean tryIntent(android.content.Intent p0, int p1)
    {
      boolean v3;
      v3 = false;
      if ( p0 != null )
      {
        try
        {
          this.this$0.getStartActivityDelegate().startActivityForResult(p0, p1);
          return true;
        }
        catch ( android.content.ActivityNotFoundException e )
        {
        }
      }
      return v3;
    }

}
