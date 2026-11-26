// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.c;

class c {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;
    private final long c;
    private final java.lang.String d;

    // Methods
    public c(String p0, String p1, String p2, long p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.d = p2;
      this.c = p3;
    }

    public static com.amazon.device.iap.internal.c.c a(String p0)
 throws com.amazon.device.iap.internal.c.d {
      org.json.JSONObject v1;
      try
      {
        v1 = new org.json.JSONObject(p0);
        return new com.amazon.device.iap.internal.c.c(v1.getString("KEY_USER_ID"), v1.getString("KEY_RECEIPT_STRING"), v1.getString("KEY_REQUEST_ID"), v1.getLong("KEY_TIMESTAMP"));
      }
      catch ( Throwable v4 )
      {
        throw new com.amazon.device.iap.internal.c.d("Input invalid for PendingReceipt Object:" + p0, v4);
      }
    }

    public String a()
    {
      return this.d;
    }

    public String b()
    {
      return this.b;
    }

    public long c()
    {
      return this.c;
    }

    public String d()
 throws org.json.JSONException {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      v1.put("KEY_USER_ID", this.a);
      v1.put("KEY_RECEIPT_STRING", this.b);
      v1.put("KEY_REQUEST_ID", this.d);
      v1.put("KEY_TIMESTAMP", this.c);
      return v1.toString();
    }

}
