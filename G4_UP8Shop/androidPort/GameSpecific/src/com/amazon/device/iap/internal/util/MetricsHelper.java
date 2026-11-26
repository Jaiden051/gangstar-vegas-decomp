// Decompiled from classes.dex (SourceFile: MetricsHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.util;

import com.amazon.device.iap.model.RequestId;
public class MetricsHelper {
    // Fields
    private static java.lang.String DESCRIPTION;
    private static java.lang.String EXCEPTION_MESSAGE;
    private static java.lang.String JSON_STRING;
    private static java.lang.String RECEIPT_VERIFICATION_FAILED_METRIC;
    private static java.lang.String SIGNATURE;
    private static java.lang.String STRING_TO_SIGN;
    private static final java.lang.String TAG;

    // Methods
    static
    {
      TAG = com.amazon.device.iap.internal.util.MetricsHelper.class.getSimpleName();
    }

    public MetricsHelper()
    {
      super();
    }

    public static void submitExceptionMetrics(String p0, String p1, Exception p2)
    {
      org.json.JSONObject v3;
      try
      {
        v3 = new org.json.JSONObject();
        v3.put("exceptionMessage", p2.getMessage());
        v3.put("description", p1);
        submitMetric(p0, "IapReceiptVerificationFailed", v3);
      }
      catch ( Exception v4 )
      {
        com.amazon.device.iap.internal.util.e.b(TAG, "error calling submitMetric: " + v4);
      }
    }

    public static void submitJsonParsingExceptionMetrics(String p0, String p1, String p2)
    {
      org.json.JSONObject v3;
      try
      {
        v3 = new org.json.JSONObject();
        v3.put("jsonString", p1);
        v3.put("description", p2);
        submitMetric(p0, "IapReceiptVerificationFailed", v3);
      }
      catch ( Exception v4 )
      {
        com.amazon.device.iap.internal.util.e.b(TAG, "error calling submitMetric: " + v4);
      }
    }

    protected static void submitMetric(String p0, String p1, org.json.JSONObject p2)
    {
      new com.amazon.device.iap.internal.b.h.a(new com.amazon.device.iap.internal.b.b_e(RequestId.fromString(p0)), p1, p2.toString()).a_();
    }

    public static void submitReceiptVerificationFailureMetrics(String p0, String p1, String p2)
    {
      org.json.JSONObject v3;
      try
      {
        v3 = new org.json.JSONObject();
        v3.put("stringToSign", p1);
        v3.put("signature", p2);
        submitMetric(p0, "IapReceiptVerificationFailed", v3);
      }
      catch ( Exception v4 )
      {
        com.amazon.device.iap.internal.util.e.b(TAG, "error calling submitMetric: " + v4);
      }
    }

}
