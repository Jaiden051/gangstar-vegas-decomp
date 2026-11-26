// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$17.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
final class FacebookAndroidGLSocialLib$17 implements java.lang.Runnable {
    // Fields
    java.lang.String batchResponse;
    java.lang.String[] requestIds;
    final java.lang.String val$ids;

    // Methods
    FacebookAndroidGLSocialLib$17(String p0)
    {
      super();
      this.val$ids = p0;
      this.requestIds = this.val$ids.split(",");
      this.batchResponse = "";
    
    }

    public final void run()
    {
      com.facebook.RequestBatch v1;
      String[] requestIds;
      int v3;
      int i;
      String v5;
      com.facebook.Request v6;
      android.os.Bundle Parameters; // RETVAL
    
      v1 = new com.facebook.RequestBatch();
      requestIds = this.requestIds;
      v3 = requestIds.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = requestIds[i];
        v6 = new com.facebook.Request(Session.getActiveSession(), v5, null, HttpMethod.GET, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17$1(this, v5));
        Parameters = v6.getParameters();
        Parameters.putString("fields", "name,gender,id,picture,updated_time");
        v6.setParameters(Parameters);
        v1.add(v6);
      }
      v1.addCallback((com.facebook.RequestBatch$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17$2(this));
      v1.executeAsync();
    }

}
