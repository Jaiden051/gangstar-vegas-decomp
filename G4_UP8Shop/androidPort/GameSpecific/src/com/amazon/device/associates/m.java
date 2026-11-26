// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class m implements com.amazon.device.associates.ShoppingService, com.amazon.device.associates.ay {
    // Fields
    private static final java.lang.String a;
    private java.lang.String b;
    private android.content.Context c;
    private android.os.Handler d;
    private com.amazon.device.associates.ShoppingListener e;
    private java.util.Map f;

    // Methods
    static
    {
      a = com.amazon.device.associates.m.class.getName();
    }

    protected m(android.content.Context p0, boolean p1)
    {
      super();
      this.b = null;
      this.c = null;
      this.d = null;
      this.e = null;
      this.f = new java.util.concurrent.ConcurrentHashMap();
      this.b = "1.0.45.0";
      this.c = p0;
      av.a(p1);
    }

    private com.amazon.device.associates.RequestId a(
            com.amazon.device.associates.ay$a p0,
            com.amazon.device.associates.RequestId p1,
            com.amazon.device.associates.ShoppingServiceRequest p2,
            com.amazon.device.associates.ar p3)
    {
      switch ( m$1.a[p0.ordinal()] )
      {
        case 1:
          p3.a(p1, (com.amazon.device.associates.ay)this);
          break;
        case 2:
          p3.a(p1, (com.amazon.device.associates.ReceiptsRequest)p2, (com.amazon.device.associates.ay)this);
          break;
        case 3:
          p3.a(p1, (com.amazon.device.associates.SearchRequest)p2, (com.amazon.device.associates.ay)this);
          break;
        case 4:
          p3.a(p1, (com.amazon.device.associates.SearchByIdRequest)p2, (com.amazon.device.associates.ay)this);
          break;
        case 5:
          p3.a(p1, (com.amazon.device.associates.PurchaseRequest)p2, (com.amazon.device.associates.ay)this);
          break;
        case 6:
          p3.b(p1, (com.amazon.device.associates.ay)this);
          break;
        case 7:
          p3.c(p1, (com.amazon.device.associates.ay)this);
          break;
        default:
          return p1;
      }
      return p1;
    }

    /* synthetic */ static com.amazon.device.associates.RequestId a(
            com.amazon.device.associates.m p0,
            com.amazon.device.associates.ay$a p1,
            com.amazon.device.associates.RequestId p2,
            com.amazon.device.associates.ShoppingServiceRequest p3,
            com.amazon.device.associates.ar p4)
    {
      return p0.a(p1, p2, p3, p4);
    }

    /* synthetic */ static java.util.Map a(com.amazon.device.associates.m p0)
    {
      return p0.f;
    }

    private void a(com.amazon.device.associates.ay$a p0, Object p1)
    {
      com.amazon.device.associates.PurchaseResponse v4;
      java.util.List Receipts;
      if ( this.e == null )
      {
        x.b(a, "No listener has been registered.");
        return;
      }
      try
      {
        switch ( m$1.a[p0.ordinal()] )
        {
          case 1:
            this.e.onServiceStatusResponse((com.amazon.device.associates.ServiceStatusResponse)p1);
            break;
          case 2:
            this.e.onReceiptsResponse((com.amazon.device.associates.ReceiptsResponse)p1);
            return;
          case 3:
            this.e.onSearchResponse((com.amazon.device.associates.SearchResponse)p1);
            return;
          case 4:
            this.e.onSearchByIdResponse((com.amazon.device.associates.SearchByIdResponse)p1);
            return;
          case 5:
            this.e.onPurchaseResponse((com.amazon.device.associates.PurchaseResponse)p1);
            v4 = (com.amazon.device.associates.PurchaseResponse)p1;
            Receipts = v4.getReceipts();
            if ( v4.getStatus() == PurchaseResponse$Status.SUCCESSFUL && Receipts != null && Receipts.size() > 0 )
              this.a(ay$a.g, v4.getRequestId(), null);
            return;
          default:
            return;
        }
        return;
      }
      catch ( Exception v3 )
      {
        x.a(a, "Error in callListener: " + v3);
      }
      return;
    }

    /* synthetic */ static void a(com.amazon.device.associates.m p0, com.amazon.device.associates.ay$a p1, Object p2)
    {
      p0.a(p1, p2);
    }

    /* synthetic */ static String c()
    {
      return a;
    }

    private void d()
 throws com.amazon.device.associates.NoListenerException {
      if ( this.e == null )
        throw new com.amazon.device.associates.NoListenerException();
    }

    public com.amazon.device.associates.RequestId a(
            com.amazon.device.associates.ay$a p0,
            com.amazon.device.associates.RequestId p1,
            com.amazon.device.associates.ShoppingServiceRequest p2)
    {
      if ( p2 != null )
        this.f.put(p1.toString(), p2);
      return this.a(p0, p1, p2, av.a());
    }

    public String a()
    {
      return this.b;
    }

    protected void a(android.content.Context p0, android.content.Intent p1)
    {
      av.c().a(p0, p1, (com.amazon.device.associates.ay)this);
    }

    public void a(com.amazon.device.associates.ay$a p0, com.amazon.device.associates.ShoppingServiceResponse p1)
    {
      this.d = bc.a();
      this.d.post((Runnable)new com.amazon.device.associates.m$2(this, p1, p0));
    }

    public android.content.Context b()
    {
      return this.c;
    }

    public com.amazon.device.associates.RequestId getReceipts(com.amazon.device.associates.ReceiptsRequest p0)
 throws com.amazon.device.associates.NoListenerException {
      an.a(p0, "request");
      this.d();
      return this.a(ay$a.b, new com.amazon.device.associates.RequestId(), p0);
    }

    public com.amazon.device.associates.RequestId getServiceStatus()
 throws com.amazon.device.associates.NoListenerException {
      this.d();
      return this.a(ay$a.a, new com.amazon.device.associates.RequestId(), null);
    }

    public com.amazon.device.associates.RequestId purchase(com.amazon.device.associates.PurchaseRequest p0)
 throws com.amazon.device.associates.NoListenerException {
      an.a(p0, "request");
      this.d();
      return this.a(ay$a.e, new com.amazon.device.associates.RequestId(), p0);
    }

    public com.amazon.device.associates.RequestId search(com.amazon.device.associates.SearchRequest p0)
 throws com.amazon.device.associates.NoListenerException {
      an.a(p0, "request");
      this.d();
      return this.a(ay$a.c, new com.amazon.device.associates.RequestId(), p0);
    }

    public com.amazon.device.associates.RequestId searchById(com.amazon.device.associates.SearchByIdRequest p0)
 throws com.amazon.device.associates.NoListenerException {
      an.a(p0, "request");
      this.d();
      return this.a(ay$a.d, new com.amazon.device.associates.RequestId(), p0);
    }

    public void setListener(com.amazon.device.associates.ShoppingListener p0)
    {
      an.a(p0, "listener");
      this.e = p0;
    }

}
