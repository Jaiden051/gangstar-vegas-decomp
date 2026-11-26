// Decompiled from classes.dex (SourceFile: PurchasingService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap;

import android.util.Log;
public final class PurchasingService {
    // Fields
    public static final boolean IS_SANDBOX_MODE;
    public static java.lang.String SDK_VERSION;
    private static final java.lang.String TAG;

    // Methods
    static
    {
      TAG = com.amazon.device.iap.PurchasingService.class.getSimpleName();
      IS_SANDBOX_MODE = com.amazon.device.iap.internal.e.a();
    }

    public PurchasingService()
    {
      super();
      Log.i(TAG, "In-App Purchasing SDK initializing. SDK Version 2.0.0, IS_SANDBOX_MODE: " + IS_SANDBOX_MODE);
    }

    public static com.amazon.device.iap.model.RequestId getProductData(java.util.Set<String> p0)
    {
      return com.amazon.device.iap.internal.d.d().a(p0);
    }

    public static com.amazon.device.iap.model.RequestId getPurchaseUpdates(boolean p0)
    {
      return com.amazon.device.iap.internal.d.d().a(p0);
    }

    public static com.amazon.device.iap.model.RequestId getUserData()
 throws java.text.ParseException, org.json.JSONException {
      return com.amazon.device.iap.internal.d.d().c();
    }

    public static void notifyFulfillment(String p0, com.amazon.device.iap.model.FulfillmentResult p1)
    {
      com.amazon.device.iap.internal.d.d().a(p0, p1);
    }

    public static com.amazon.device.iap.model.RequestId purchase(String p0)
    {
      return com.amazon.device.iap.internal.d.d().a(p0);
    }

    public static void registerListener(
            android.content.Context p0,
            com.amazon.device.iap.PurchasingListener p1)
    {
      com.amazon.device.iap.internal.d.d().a(p0, p1);
    }

}
