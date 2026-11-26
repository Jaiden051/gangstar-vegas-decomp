// Decompiled from classes.dex (SourceFile: AppEventsLogger$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$7 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.AppEventsLogger$AccessTokenAppIdPair val$accessTokenAppId;
    final com.facebook.AppEventsLogger$FlushStatistics val$flushState;
    final com.facebook.Request val$postRequest;
    final com.facebook.AppEventsLogger$SessionEventsState val$sessionEventsState;

    // Methods
    AppEventsLogger$7(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0,
            com.facebook.Request p1,
            com.facebook.AppEventsLogger$SessionEventsState p2,
            com.facebook.AppEventsLogger$FlushStatistics p3)
    {
      super();
      this.val$accessTokenAppId = p0;
      this.val$postRequest = p1;
      this.val$sessionEventsState = p2;
      this.val$flushState = p3;
    
    }

    public final void onCompleted(com.facebook.Response p0)
    {
      AppEventsLogger.access$900(
        this.val$accessTokenAppId,
        this.val$postRequest,
        p0,
        this.val$sessionEventsState,
        this.val$flushState);
    }

}
