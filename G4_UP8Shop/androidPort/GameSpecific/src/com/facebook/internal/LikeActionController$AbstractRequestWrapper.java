// Decompiled from classes.dex (SourceFile: LikeActionController$AbstractRequestWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
abstract class LikeActionController$AbstractRequestWrapper {
    // Fields
    com.facebook.FacebookRequestError error;
    protected java.lang.String objectId;
    private com.facebook.Request request;
    final com.facebook.internal.LikeActionController this$0;

    // Methods
    protected LikeActionController$AbstractRequestWrapper(com.facebook.internal.LikeActionController p0, String p1)
    {
      super();
      this.this$0 = p0;
      this.objectId = p1;
    
    }

    void addToBatch(com.facebook.RequestBatch p0)
    {
      p0.add(this.request);
    }

    protected void processError(com.facebook.FacebookRequestError p0)
    {
      Object[] v2;
      v2 = new Object[2];
      v2[0] = this.objectId;
      v2[1] = p0;
      Logger.log(
        LoggingBehavior.REQUESTS,
        LikeActionController.access$1500(),
        "Error running request for object '%s' : %s",
        v2);
    }

    protected abstract void processSuccess(com.facebook.Response p0);

    protected void setRequest(com.facebook.Request p0)
    {
      this.request = p0;
      p0.setVersion("v2.2");
      p0.setCallback((com.facebook.Request$Callback)new com.facebook.internal.LikeActionController$AbstractRequestWrapper$1(this));
    }

}
