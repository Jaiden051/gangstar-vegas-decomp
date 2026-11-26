// Decompiled from classes.dex (SourceFile: AppEventsLogger$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$5 implements java.lang.Runnable {
    // Fields
    final com.facebook.AppEventsLogger$AccessTokenAppIdPair val$accessTokenAppId;
    final android.content.Context val$context;
    final com.facebook.AppEventsLogger$AppEvent val$event;

    // Methods
    AppEventsLogger$5(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1,
            com.facebook.AppEventsLogger$AppEvent p2)
    {
      super();
      this.val$context = p0;
      this.val$accessTokenAppId = p1;
      this.val$event = p2;
    
    }

    public final void run()
    {
      AppEventsLogger.access$600(this.val$context, this.val$accessTokenAppId).addEvent(this.val$event);
      AppEventsLogger.access$700();
    }

}
