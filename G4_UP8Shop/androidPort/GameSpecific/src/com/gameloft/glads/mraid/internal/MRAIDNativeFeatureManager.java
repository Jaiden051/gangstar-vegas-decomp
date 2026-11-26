// Decompiled from classes.dex (SourceFile: MRAIDNativeFeatureManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid.internal;

import android.os.Build;
public class MRAIDNativeFeatureManager {
    // Fields
    private static java.lang.String TAG;
    private android.content.Context context;
    private java.util.List supportedNativeFeatures;

    // Methods
    public MRAIDNativeFeatureManager(android.content.Context p0, java.util.List<String> p1)
    {
      super();
      this.context = p0;
      this.supportedNativeFeatures = p1;
    }

    public boolean isCalendarSupported()
    {
      boolean v1;
      v1 = this.supportedNativeFeatures.contains("calendar")
        && Build.VERSION.SDK_INT >= 14
        && this.context.checkCallingOrSelfPermission("android.permission.WRITE_CALENDAR") == 0;
      MRAIDLog.d("MRAIDNativeFeatureManager", "isCalendarSupported " + v1);
      return v1;
    }

    public boolean isInlineVideoSupported()
    {
      boolean v1;
      v1 = this.supportedNativeFeatures.contains("inlineVideo");
      MRAIDLog.d("MRAIDNativeFeatureManager", "isInlineVideoSupported " + v1);
      return v1;
    }

    public boolean isSmsSupported()
    {
      boolean v1;
      v1 = this.supportedNativeFeatures.contains("sms")
        && this.context.checkCallingOrSelfPermission("android.permission.SEND_SMS") == 0;
      MRAIDLog.d("MRAIDNativeFeatureManager", "isSmsSupported " + v1);
      return v1;
    }

    public boolean isStorePictureSupported()
    {
      boolean v1;
      v1 = this.supportedNativeFeatures.contains("storePicture");
      MRAIDLog.d("MRAIDNativeFeatureManager", "isStorePictureSupported " + v1);
      return v1;
    }

    public boolean isTelSupported()
    {
      boolean v1;
      v1 = this.supportedNativeFeatures.contains("tel")
        && this.context.checkCallingOrSelfPermission("android.permission.CALL_PHONE") == 0;
      MRAIDLog.d("MRAIDNativeFeatureManager", "isTelSupported " + v1);
      return v1;
    }

}
