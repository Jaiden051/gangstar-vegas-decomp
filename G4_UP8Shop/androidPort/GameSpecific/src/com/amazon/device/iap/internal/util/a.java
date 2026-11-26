// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.util;

import android.text.format.Time;
import com.amazon.android.Kiwi;
import com.amazon.device.iap.model.ProductType;
import java.security.Signature;
public class a {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.util.a.class.getSimpleName();
    }

    public a()
    {
      super();
    }

    private static com.amazon.device.iap.model.Receipt a(org.json.JSONObject p0)
 throws org.json.JSONException {
      java.util.Date v1;
      String v2;
      String String;
      com.amazon.device.iap.model.ProductType v4;
      String v5;
      java.util.Date v6;
      String v7;
      v1 = null;
      v2 = p0.optString("token");
      String = p0.getString("sku");
      v4 = ProductType.valueOf(p0.getString("itemType").toUpperCase());
      v5 = p0.optString("startDate");
      if ( a(v5) )
        v6 = null;
      else
        v6 = b(v5);
      v7 = p0.optString("endDate");
      if ( !a(v7) )
        v1 = b(v7);
      return new com.amazon.device.iap.internal.model.ReceiptBuilder().setReceiptId(v2).setSku(String).setProductType(v4).setPurchaseDate(v6).setCancelDate(v1).build();
    }

    public static com.amazon.device.iap.model.Receipt a(org.json.JSONObject p0, String p1, String p2)
    {
      com.amazon.device.iap.model.Receipt v3;
      switch ( a$1.a[b(p0).ordinal()] )
      {
        case 1:
          v3 = c(p0, p1, p2);
          break;
        case 2:
          v3 = b(p0, p1, p2);
          break;
        default:
          v3 = d(p0, p1, p2);
          break;
      }
      return v3;
    }

    protected static boolean a(String p0)
    {
      return p0 == null || p0.trim().length() == 0;
    }

    private static com.amazon.device.iap.internal.util.c b(org.json.JSONObject p0)
    {
      String v1;
      v1 = p0.optString("DeviceId");
      if ( !com.amazon.device.iap.internal.util.d.a(p0.optString("receiptId")) )
        return c.c;
      if ( com.amazon.device.iap.internal.util.d.a(v1) )
        return c.a;
      return c.b;
    }

    private static com.amazon.device.iap.model.Receipt b(org.json.JSONObject p0, String p1, String p2)
    {
      String v3;
      com.amazon.device.iap.model.Receipt v5; // RETVAL
      com.amazon.device.iap.model.Receipt v6;
      String v7;
      boolean isSignedByKiwi;
      v3 = p0.optString("signature");
      if ( com.amazon.device.iap.internal.util.d.a(v3) )
      {
        com.amazon.device.iap.internal.util.e.b(a, "a signature was not found in the receipt for request ID " + p2);
        MetricsHelper.submitReceiptVerificationFailureMetrics(p2, "NO Signature found", v3);
        throw new com.amazon.device.iap.internal.b.b_d(p2, null, v3);
      }
      try
      {
        v5 = a(p0);
      }
      catch ( org.json.JSONException v9 )
      {
        throw new com.amazon.device.iap.internal.b.b_a(p2, p0.toString(), v9);
      }
      v6 = v5;
      v7 = p1 + "-" + v5.getReceiptId();
      isSignedByKiwi = Kiwi.isSignedByKiwi(v7, v3);
      com.amazon.device.iap.internal.util.e.a(a, "stringToVerify/legacy:\n" + v7 + "\nsignature:\n" + v3);
      if ( !isSignedByKiwi )
      {
        MetricsHelper.submitReceiptVerificationFailureMetrics(p2, v7, v3);
        throw new com.amazon.device.iap.internal.b.b_d(p2, v7, v3);
      }
      return v6;
    }

    protected static java.util.Date b(String p0)
 throws org.json.JSONException {
      java.text.DateFormat v1;
      java.util.Date v2;
      long Time; // RETVAL
    
      v1 = new java.text.SimpleDateFormat("MM/dd/yyyy HH:mm:ss");
      try
      {
        v2 = v1.parse(p0);
        Time = v2.getTime();
      }
      catch ( java.text.ParseException v5 )
      {
        throw new org.json.JSONException(v5.getMessage());
      }
      if ( Time == 0 )
        return null;
      return v2;
    }

    private static com.amazon.device.iap.model.Receipt c(org.json.JSONObject p0, String p1, String p2)
    {
      java.util.Date CancelDate;
      String v4;
      String v5;
      com.amazon.device.iap.model.Receipt v7; // RETVAL
      com.amazon.device.iap.model.Receipt v8;
      Object[] v9;
      java.util.Date PurchaseDate;
      String v11;
      CancelDate = null;
      v4 = p0.optString("DeviceId");
      v5 = p0.optString("signature");
      if ( com.amazon.device.iap.internal.util.d.a(v5) )
      {
        com.amazon.device.iap.internal.util.e.b(a, "a signature was not found in the receipt for request ID " + p2);
        MetricsHelper.submitReceiptVerificationFailureMetrics(p2, "NO Signature found", v5);
        throw new com.amazon.device.iap.internal.b.b_d(p2, null, v5);
      }
      try
      {
        v7 = a(p0);
      }
      catch ( org.json.JSONException v12 )
      {
        throw new com.amazon.device.iap.internal.b.b_a(p2, p0.toString(), v12);
      }
      v8 = v7;
      v9 = new Object[9];
      v9[0] = "2.0.0";
      v9[1] = p1;
      v9[2] = v4;
      v9[3] = v7.getProductType();
      v9[4] = v8.getSku();
      v9[5] = v8.getReceiptId();
      v9[6] = p2;
      if ( ProductType.SUBSCRIPTION == v8.getProductType() )
        PurchaseDate = v8.getPurchaseDate();
      else
        PurchaseDate = null;
      v9[7] = PurchaseDate;
      if ( ProductType.SUBSCRIPTION == v8.getProductType() )
        CancelDate = v8.getCancelDate();
      v9[8] = CancelDate;
      v11 = String.format("%s|%s|%s|%s|%s|%s|%s|%tQ|%tQ", v9);
      com.amazon.device.iap.internal.util.e.a(a, "stringToVerify/v1:\n" + v11 + "\nsignature:\n" + v5);
      if ( !Kiwi.isSignedByKiwi(v11, v5) )
      {
        MetricsHelper.submitReceiptVerificationFailureMetrics(p2, v11, v5);
        throw new com.amazon.device.iap.internal.b.b_d(p2, v11, v5);
      }
      return v8;
    }

    private static com.amazon.device.iap.model.Receipt d(org.json.JSONObject p0, String p1, String p2)
    {
      java.util.Date v3;
      String v4;
      String v5;
      String String;
      String v8;
      com.amazon.device.iap.model.ProductType v9;
      String v10;
      java.util.Date v11;
      String v12;
      com.amazon.device.iap.model.Receipt v13;
      Object[] v14;
      String v15;
      v3 = null;
      v4 = p0.optString("DeviceId");
      v5 = p0.optString("signature");
      if ( com.amazon.device.iap.internal.util.d.a(v5) )
      {
        com.amazon.device.iap.internal.util.e.b(a, "a signature was not found in the receipt for request ID " + p2);
        MetricsHelper.submitReceiptVerificationFailureMetrics(p2, "NO Signature found", v5);
        throw new com.amazon.device.iap.internal.b.b_d(p2, null, v5);
      }
      try
      {
        String = p0.getString("receiptId");
        v8 = p0.getString("sku");
        v9 = ProductType.valueOf(p0.getString("itemType").toUpperCase());
        v10 = p0.optString("purchaseDate");
        if ( a(v10) )
          v11 = null;
        else
          v11 = b(v10);
        v12 = p0.optString("cancelDate");
        if ( !a(v12) )
          v3 = b(v12);
        v13 = new com.amazon.device.iap.internal.model.ReceiptBuilder().setReceiptId(String).setSku(v8).setProductType(v9).setPurchaseDate(v11).setCancelDate(v3).build();
        v14 = new Object[7];
        v14[0] = p1;
        v14[1] = v4;
        v14[2] = v13.getProductType();
        v14[3] = v13.getSku();
        v14[4] = v13.getReceiptId();
        v14[5] = v13.getPurchaseDate();
        v14[6] = v13.getCancelDate();
        v15 = String.format("%s|%s|%s|%s|%s|%tQ|%tQ", v14);
        com.amazon.device.iap.internal.util.e.a(a, "stringToVerify/v2:\n" + v15 + "\nsignature:\n" + v5);
        if ( !Kiwi.isSignedByKiwi(v15, v5) )
        {
          MetricsHelper.submitReceiptVerificationFailureMetrics(p2, v15, v5);
          throw new com.amazon.device.iap.internal.b.b_d(p2, v15, v5);
        }
        return v13;
      }
      catch ( org.json.JSONException v16 )
      {
        throw new com.amazon.device.iap.internal.b.b_a(p2, p0.toString(), v16);
      }
    }

}
