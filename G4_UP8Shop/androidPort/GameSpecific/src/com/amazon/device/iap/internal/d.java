// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal;

public class d {
    // Fields
    private static java.lang.String a;
    private static com.amazon.device.iap.internal.d b;
    private final com.amazon.device.iap.internal.iap_c c;
    private android.content.Context d;
    private com.amazon.device.iap.PurchasingListener e;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.d.class.getSimpleName();
      b = new com.amazon.device.iap.internal.d();
    }

    private d()
    {
      super();
      this.c = com.amazon.device.iap.internal.e.b();
    }

    public static com.amazon.device.iap.internal.d d()
    {
      return b;
    }

    private void e()
    {
      if ( this.e == null )
        throw new IllegalStateException("You must register a PurchasingListener before invoking this operation");
    }

    public com.amazon.device.iap.PurchasingListener a()
    {
      return this.e;
    }

    public com.amazon.device.iap.model.RequestId a(String p0)
    {
      com.amazon.device.iap.model.RequestId v2;
      com.amazon.device.iap.internal.util.d.a(p0, "sku");
      this.e();
      v2 = new com.amazon.device.iap.model.RequestId();
      this.c.a(v2, p0);
      return v2;
    }

    public com.amazon.device.iap.model.RequestId a(java.util.Set<String> p0)
    {
      java.util.Iterator v2;
      com.amazon.device.iap.model.RequestId v3;
      com.amazon.device.iap.internal.util.d.a(p0, "skus");
      com.amazon.device.iap.internal.util.d.a(p0, "skus");
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        if ( ((String)v2.next()).trim().length() == 0 )
          throw new IllegalArgumentException("Empty SKU values are not allowed");
      }
      if ( p0.size() > 100 )
        throw new IllegalArgumentException(p0.size() + " SKUs were provided, but no more than 100" + " SKUs are allowed");
      this.e();
      v3 = new com.amazon.device.iap.model.RequestId();
      this.c.a(v3, new java.util.LinkedHashSet(p0));
      return v3;
    }

    public com.amazon.device.iap.model.RequestId a(boolean p0)
    {
      com.amazon.device.iap.model.RequestId v2;
      this.e();
      v2 = new com.amazon.device.iap.model.RequestId();
      this.c.a(v2, p0);
      return v2;
    }

    public void a(android.content.Context p0, android.content.Intent p1)
    {
      try
      {
        this.c.a(p0, p1);
      }
      catch ( Exception v3 )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error in onReceive: " + v3);
      }
    }

    public void a(android.content.Context p0, com.amazon.device.iap.PurchasingListener p1)
    {
      com.amazon.device.iap.internal.util.e.a(a, "PurchasingListener registered: " + p1);
      com.amazon.device.iap.internal.util.e.a(a, "PurchasingListener Context: " + p0);
      if ( p1 == null || p0 == null )
        throw new IllegalArgumentException("Neither PurchasingListener or its Context can be null");
      this.d = p0.getApplicationContext();
      this.e = p1;
    }

    public void a(String p0, com.amazon.device.iap.model.FulfillmentResult p1)
    {
      if ( com.amazon.device.iap.internal.util.d.a(p0) )
        throw new IllegalArgumentException("Empty receiptId is not allowed");
      com.amazon.device.iap.internal.util.d.a(p1, "fulfillmentResult");
      this.e();
      this.c.a(new com.amazon.device.iap.model.RequestId(), p0, p1);
    }

    public android.content.Context b()
    {
      return this.d;
    }

    public com.amazon.device.iap.model.RequestId c()
 throws java.text.ParseException, org.json.JSONException {
      com.amazon.device.iap.model.RequestId v1;
      this.e();
      v1 = new com.amazon.device.iap.model.RequestId();
      this.c.a(v1);
      return v1;
    }

}
