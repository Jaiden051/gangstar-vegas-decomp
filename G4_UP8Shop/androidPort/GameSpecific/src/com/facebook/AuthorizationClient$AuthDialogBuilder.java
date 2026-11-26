// Decompiled from classes.dex (SourceFile: AuthorizationClient$AuthDialogBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$AuthDialogBuilder extends com.facebook.widget.WebDialog$Builder {
    // Fields
    private static java.lang.String OAUTH_DIALOG;
    static java.lang.String REDIRECT_URI;
    private java.lang.String e2e;
    private boolean isRerequest;

    // Methods
    public AuthorizationClient$AuthDialogBuilder(android.content.Context p0, String p1, android.os.Bundle p2)
    {
      super(p0, p1, "oauth", p2);
    }

    public com.facebook.widget.WebDialog build()
    {
      android.os.Bundle Parameters;
      Parameters = this.getParameters();
      Parameters.putString("redirect_uri", "fbconnect://success");
      Parameters.putString("client_id", this.getApplicationId());
      Parameters.putString("e2e", this.e2e);
      Parameters.putString("response_type", "token");
      Parameters.putString("return_scopes", "true");
      if ( this.isRerequest && !Settings.getPlatformCompatibilityEnabled() )
        Parameters.putString("auth_type", "rerequest");
      return new com.facebook.widget.WebDialog(this.getContext(), "oauth", Parameters, this.getTheme(), this.getListener());
    }

    public com.facebook.AuthorizationClient$AuthDialogBuilder setE2E(String p0)
    {
      this.e2e = p0;
      return this;
    }

    public com.facebook.AuthorizationClient$AuthDialogBuilder setIsRerequest(
            boolean p0)
    {
      this.isRerequest = p0;
      return this;
    }

}
