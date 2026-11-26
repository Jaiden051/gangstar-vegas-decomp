// Decompiled from classes.dex (SourceFile: dg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class dg extends java.lang.Number implements java.lang.Comparable {
    // Fields
    private double a;
    private long b;
    private boolean c;

    // Methods
    private dg(double p0)
    {
      super();
      this.a = p0;
      this.c = false;
    }

    private dg(long p0)
    {
      super();
      this.b = p0;
      this.c = true;
    }

    public static com.google.android.gms.tagmanager.dg a(Double p0)
    {
      return new com.google.android.gms.tagmanager.dg(p0.doubleValue());
    }

    private long c()
    {
      if ( this.c )
        return this.b;
      else
        return (long)this.a;
    }

    public static com.google.android.gms.tagmanager.dg co(String p0)
    {
      com.google.android.gms.tagmanager.dg v1;
      try
      {
        return new com.google.android.gms.tagmanager.dg(Long.parseLong(p0));
      }
      catch ( NumberFormatException v3 )
      {
        try
        {
          v1 = new com.google.android.gms.tagmanager.dg(Double.parseDouble(p0));
        }
        catch ( NumberFormatException e )
        {
          throw new NumberFormatException(p0 + " is not a valid TypedNumber");
        }
      }
      return v1;
    }

    private int d()
    {
      return (int)this.longValue();
    }

    private short e()
    {
      return (short)this.longValue();
    }

    public static com.google.android.gms.tagmanager.dg z(long p0)
    {
      return new com.google.android.gms.tagmanager.dg(p0);
    }

    public final int a(com.google.android.gms.tagmanager.dg p0)
    {
      if ( this.c && p0.c )
        return new Long(this.b).compareTo(Long.valueOf(p0.b));
      else
        return Double.compare(this.doubleValue(), p0.doubleValue());
    }

    public final boolean a()
    {
      return !this.c;
    }

    public final boolean b()
    {
      return this.c;
    }

    public byte byteValue()
    {
      return (byte)this.longValue();
    }

    /* synthetic */ public int compareTo(Object p0)
    {
      return this.a((com.google.android.gms.tagmanager.dg)p0);
    }

    public double doubleValue()
    {
      if ( this.c )
        return (double)this.b;
      else
        return this.a;
    }

    public boolean equals(Object p0)
    {
      return p0 instanceof com.google.android.gms.tagmanager.dg && this.a((com.google.android.gms.tagmanager.dg)p0) == 0;
    }

    public float floatValue()
    {
      return (float)this.doubleValue();
    }

    public int hashCode()
    {
      return new Long(this.longValue()).hashCode();
    }

    public int intValue()
    {
      return (int)this.longValue();
    }

    public long longValue()
    {
      if ( this.c )
        return this.b;
      else
        return (long)this.a;
    }

    public short shortValue()
    {
      return (short)this.longValue();
    }

    public String toString()
    {
      if ( this.c )
        return Long.toString(this.b);
      else
        return Double.toString(this.a);
    }

}
