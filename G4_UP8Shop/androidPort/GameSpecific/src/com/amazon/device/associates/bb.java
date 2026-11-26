// Decompiled from classes.dex (SourceFile: bb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class bb extends com.amazon.device.associates.al {
    // Fields
    private static com.amazon.device.associates.i b;

    // Methods
    public bb()
    {
      super("rut.db", 86400000);
    }

    protected com.amazon.device.associates.i a()
    {
      com.amazon.device.associates.i v1;
      if ( b == null )
      {
        v1 = new com.amazon.device.associates.i();
        b = v1;
        v1.a(i.a, "http://www.amazon.com/gp/aw/d/$ASIN?tag=defaulttag-20&linkCode=da2&ascsubtag=$SUBTAG");
        b.a(i.b, "http://www.amazon.com/gp/aw/h.html?tag=defaulttag-20&linkCode=da1&ascsubtag=$SUBTAG");
        b.a(i.c, "tag=defaulttag-20&linkCode=da5&ascsubtag=$SUBTAG");
        b.a(i.d, "www.amazon.com/gp/aw/s?tag=defaulttag-20&linkCode=da4&i=$CATEGORY&k=$SEARCH&sort=$SORTTYPE&p_lbr_brands_bro" +
                 "wse-bin=$BRAND&ascsubtag=$SUBTAG");
        b.a(i.e, "http://www.amazon.com/gp/aw/d/$ASIN?tag=defaulttag-20&linkCode=da6");
        b.a(i.f, "http://www.amazon.com/gp/aw/d/$ASIN?tag=defaulttag-20&linkCode=da7");
        b.a(i.g, "http://www.amazon.com/gp/dmusic/device/mp3/store/album/$ASIN?$DEVICEtag=defaulttag-20&linkCode=da7");
        b.a(i.h, "http://www.amazon.com/gp/dmusic/device/mp3/store/track/$ASIN?$DEVICEtag=defaulttag-20&linkCode=da7");
      }
      return b;
    }

    protected com.amazon.device.associates.i a(com.amazon.device.associates.al<com.amazon.device.associates.i>[] p0)
 throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
      com.amazon.device.associates.al v2;
      com.amazon.device.associates.j v3;
      com.amazon.device.associates.i v4; // RETVAL
      com.amazon.device.associates.bj v5;
      v2 = p0[0];
      v3 = new com.amazon.device.associates.j();
      v3.a(bo.b());
      v3.e();
      v4 = v3.d();
      v5 = v4;
      if ( v4 != null )
      {
        if ( v4.b() >= 300 && v5.b() <= 400 ) { p.c("AsyncGetURLTemplatesCacheTask", "Checking to load from Cache"); v2.a = (com.amazon.device.associates.i)y.a(this.g()); if ( v2.a != null ) {
          v2.a(true);
          v2.b(false);
          return (com.amazon.device.associates.i)v2.a;
        } }
        if ( v4.b() < 300 || v5.b() > 400 || v2.a == null ) {
          v2.a = v5;
          v2.a(true);
          v2.b(true);
          return (com.amazon.device.associates.i)v2.a;
        }
      }
      else
      {
        v2.b(false);
        v2.a(false);
        if ( v2.a != null )
        {
          p.c("AsyncGetURLTemplatesCacheTask", "Setting to expired Templates as getTemplates failed");
        }
        else
        {
          v2.a = this.a();
          p.c("AsyncGetURLTemplatesCacheTask", "Setting Default Templates");
        }
        return (com.amazon.device.associates.i)v2.a;
      }
      throw new IllegalStateException("Unreachable");
    }

    /* synthetic */ protected com.amazon.device.associates.bj b()
    {
      return this.a();
    }

    /* synthetic */ protected Object doInBackground(Object[] p0)
    {
      try {
      return this.a((com.amazon.device.associates.al[])p0);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
