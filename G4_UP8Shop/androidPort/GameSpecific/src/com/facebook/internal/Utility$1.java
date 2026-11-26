// Decompiled from classes.dex (SourceFile: Utility$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class Utility$1 extends android.os.AsyncTask<Void, Void, com.facebook.model.GraphObject> {
    // Fields
    final java.lang.String val$applicationId;
    final android.content.Context val$context;
    final java.lang.String val$settingsKey;

    // Methods
    Utility$1(String p0, android.content.Context p1, String p2)
    {
      super();
      this.val$applicationId = p0;
      this.val$context = p1;
      this.val$settingsKey = p2;
    
    }

    protected final com.facebook.model.GraphObject doInBackground(Void[] p0)
    {
      return Utility.access$000(this.val$applicationId);
    }



    protected final void onPostExecute(com.facebook.model.GraphObject p0)
    {
      org.json.JSONObject InnerJSONObject;
      if ( p0 != null )
      {
        InnerJSONObject = p0.getInnerJSONObject();
        Utility.access$100(this.val$applicationId, InnerJSONObject);
        this.val$context.getSharedPreferences("com.facebook.internal.preferences.APP_SETTINGS", 0).edit().putString(this.val$settingsKey, InnerJSONObject.toString()).apply();
      }
      Utility.access$202(null);
    }



}
