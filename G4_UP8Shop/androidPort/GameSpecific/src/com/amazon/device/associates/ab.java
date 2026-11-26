// Decompiled from classes.dex (SourceFile: ab.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class ab {
    // Fields
    private static com.amazon.device.associates.ab a;
    private boolean b;

    // Methods
    static
    {
      a = null;
    }

    private ab(android.content.Context p0, String p1, java.util.Set<String> p2)
    {
      super();
      this.b = false;
      if ( p0 == null || p1 == null || "".equals(p1) )
      {
        p.b("MAIN", "Initialize failed due to invalid input.");
        throw new IllegalArgumentException("Invalid input.");
      }
      try
      {
        bo.a(p0, p1);
        new com.amazon.device.associates.bm().execute(new String[0]);
        ah.a();
        if ( p2 != null )
          n.a((String[])p2.toArray(new String[0]));
        else
          n.a((String[])null);
      }
      catch ( Exception e )
      {
        p.b("MAIN", "Initialize failed");
      }
    }

    public static com.amazon.device.associates.ab a(android.content.Context p0, String p1, java.util.Set<String> p2)
    {
      if ( a == null )
        a = new com.amazon.device.associates.ab(p0, p1, p2);
      return a;
    }

    public void a(android.view.View p0, com.amazon.device.associates.OpenProductPageRequest p1)
    {
      String ProductId;
      if ( p1 != null && p1.getProductId() != null && !p1.getProductId().trim().equals("") )
        ProductId = p1.getProductId();
      else
        ProductId = null;
      if ( !this.b )
      {
        this.b = true;
        new com.amazon.device.associates.a(ProductId).a(p0);
        this.b = false;
      }
    }

    public void a(com.amazon.device.associates.OpenRetailPageRequest p0)
    {
      String v2;
      if ( p0 != null )
      {
        if ( p0 instanceof com.amazon.device.associates.OpenProductPageRequest )
        {
          v2 = bq.b(((com.amazon.device.associates.OpenProductPageRequest)p0).getProductId());
        }
        else if ( p0 instanceof com.amazon.device.associates.OpenSearchPageRequest )
        {
          v2 = bq.a((com.amazon.device.associates.OpenSearchPageRequest)p0);
        }
        else
        {
          v2 = bq.a();
        }
        bq.d(v2);
      }
    }

    public final boolean a(android.webkit.WebView p0, String p1)
    {
      return ad.a(p0, p1);
    }

    public void b(android.view.View p0, com.amazon.device.associates.OpenProductPageRequest p1)
    {
      String v3;
      if ( p1 != null && p1.getProductId() != null && !p1.getProductId().trim().equals("") )
        v3 = p1.getProductId().trim();
      else
        v3 = null;
      if ( !this.b )
      {
        this.b = true;
        new com.amazon.device.associates.c(v3).a(p0);
        this.b = false;
      }
    }

}
