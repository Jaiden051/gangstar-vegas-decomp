// Decompiled from classes.dex (SourceFile: AuthorizationClient$AuthHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

abstract class AuthorizationClient$AuthHandler implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    java.util.Map methodLoggingExtras;
    final com.facebook.AuthorizationClient this$0;

    // Methods
    AuthorizationClient$AuthHandler(com.facebook.AuthorizationClient p0)
    {
      super();
      this.this$0 = p0;
    
    }

    protected void addLoggingExtra(String p0, Object p1)
    {
      java.util.Map methodLoggingExtras;
      String v4;
      if ( this.methodLoggingExtras == null )
        this.methodLoggingExtras = new java.util.HashMap();
      methodLoggingExtras = this.methodLoggingExtras;
      if ( p1 != null )
        v4 = p1.toString();
      else
        v4 = null;
      methodLoggingExtras.put(p0, v4);
    }

    void cancel()
    {
      ;
    }

    abstract java.lang.String getNameForLogging();

    boolean needsInternetPermission()
    {
      return false;
    }

    boolean needsRestart()
    {
      return false;
    }

    boolean onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      return false;
    }

    abstract boolean tryAuthorize(com.facebook.AuthorizationClient$AuthorizationRequest p0);

}
