// Decompiled from classes.dex (SourceFile: LoginButton$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.internal.Utility;
class LoginButton$1 extends android.os.AsyncTask<Void, Void, com.facebook.internal.Utility$FetchedAppSettings> {
    // Fields
    final com.facebook.widget.LoginButton this$0;
    final java.lang.String val$appId;

    // Methods
    LoginButton$1(com.facebook.widget.LoginButton p0, String p1)
    {
      super();
      this.this$0 = p0;
      this.val$appId = p1;
    
    }

    protected com.facebook.internal.Utility$FetchedAppSettings doInBackground(Void[] p0)
    {
      return Utility.queryAppSettings(this.val$appId, false);
    }



    protected void onPostExecute(com.facebook.internal.Utility$FetchedAppSettings p0)
    {
      LoginButton.access$300(this.this$0, p0);
    }



}
