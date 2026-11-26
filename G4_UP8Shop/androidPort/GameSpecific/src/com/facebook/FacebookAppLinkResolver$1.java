// Decompiled from classes.dex (SourceFile: FacebookAppLinkResolver$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class FacebookAppLinkResolver$1 implements bolts.l<java.util.Map<android.net.Uri, bolts.d>, bolts.d> {
    // Fields
    final com.facebook.FacebookAppLinkResolver this$0;
    final android.net.Uri val$uri;

    // Methods
    FacebookAppLinkResolver$1(com.facebook.FacebookAppLinkResolver p0, android.net.Uri p1)
    {
      super();
      this.this$0 = p0;
      this.val$uri = p1;
    
    }

    public bolts.d then(bolts.Task p0)
    {
      return (bolts.d)((java.util.Map)p0.c()).get(this.val$uri);
    }



}
