// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class a {
    // Fields
    private static com.amazon.device.associates.a$a d;
    private final java.lang.String a;
    private final android.view.View.OnTouchListener b;
    private java.lang.String c;

    // Methods
    public a(String p0)
    {
      super();
      this.c = null;
      this.a = p0;
      this.b = (android.view.View.OnTouchListener)new com.amazon.device.associates.a$1(this);
    }

    private String a(double p0)
    {
      int v2;
      int v3;
      v2 = (int)p0;
      if ( p0 == (double)(int)p0 )
        v3 = 65 - 13 * v2;
      else
        v3 = 193 - 13 * v2;
      return String.valueOf(v3);
    }

    private String a(int p0, int p1)
    {
      String v3;
      com.amazon.device.associates.br v4; // RETVAL
      com.amazon.device.associates.br v5;
      StringBuilder v6;
      String v7;
      String v9;
      String v10;
      String v11;
      String c;
      v3 = ((com.amazon.device.associates.bt)((com.amazon.device.associates.h)ah.a(com.amazon.device.associates.h.class)).j()).a();
      v4 = n.a(this.a);
      v5 = v4;
      if ( v4 != null && v4.g() )
      {
        v9 = v3.replace("$WIDTH", String.valueOf(p0)).replace("$HEIGHT", String.valueOf(p1)).replace("$TITLE", v5.b());
        v10 = v5.a();
        v11 = v9.replace("$ICON_SRC", v10.substring(0, v10.lastIndexOf("."))
                                    + "._SL"
                                    + (int)((double)p0 * 0.3)
                                    + "_"
                                    + v10.substring(v10.lastIndexOf("."))).replace("$PRICE", v5.c()).replace("$REVIEW_COUNT", v5.e());
        if ( this.c != null )
          c = this.c;
        else
          c = v5.f();
        v7 = v11.replace("$RETAIL_URL", c).replace("$RATING_DISPLACEMENT", this.a(v5.d()));
        this.c = bq.c(this.a);
      }
      else
      {
        v6 = new StringBuilder("<!DOCTYPE html>\n<html lang=\"en\">");
        v6.append("<body style='height: " + p1 + "px; width: " + p0 + "px;'>\n").append("<div style='float:left; display:bloc" +
                                                                                        "k; margin:auto 0;'>\n" +
                                                                                        "<img src='file:///android_res/drawab" +
                                                                                        "le/logo.png' alt='amazon' style='dis" +
                                                                                        "play: block; height:90%;' />\n").append("</div>\n" +
                                                                                                 "<div style='float:left; mar" +
                                                                                                 "gin:auto 0; width: 55%;'>\n").append("<div style='height:" + (int)(0.8666666666666667 * (double)p1) + "px; display:table-cell; vertical-align:middle;'>\n").append("<h4>Go to <span style='color:#2c77ef'>amazon.com<span></h4>\n</div>\n").append("</div>\n</body>\n").append("</html>\n");
        v7 = v6.toString();
        this.c = bq.a();
      }
      return v7;
    }

    /* synthetic */ static String a(com.amazon.device.associates.a p0)
    {
      return p0.c;
    }

    public void a(android.view.View p0)
    {
      com.amazon.device.associates.a$a v2;
      String[] v3;
      Object[] v5;
      try
      {
        if ( d != null && d.isShown() )
          a$a.a(d).removeView(d);
        v2 = new com.amazon.device.associates.a$a(bo.a(), this.b);
        d = v2;
        v2.a(p0);
        a$a.e(d).loadDataWithBaseURL("blarg://ignored", this.a((int)((float)a$a.b(d) / a$a.c(d)) - 10, (int)((float)a$a.d(d) / a$a.c(d)) - 10), "text/html", "UTF-8", "");
        v3 = new String[3];
        v3[0] = bq.a(this.c, "tag");
        v3[1] = bq.a(this.c, "linkCode");
        v3[2] = this.a;
        new com.amazon.device.associates.o().execute(v3);
      }
      catch ( Exception v4 )
      {
        v4.printStackTrace();
        v5 = new Object[1];
        v5[0] = v4;
        p.c("PopoverWindow", "Error displaying popover", v5);
      }
    }

}
