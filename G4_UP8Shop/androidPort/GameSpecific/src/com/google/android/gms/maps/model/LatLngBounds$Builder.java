// Decompiled from classes.dex (SourceFile: LatLngBounds$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hn;
public final class LatLngBounds$Builder {
    // Fields
    private double a;
    private double b;
    private double c;
    private double d;

    // Methods
    public LatLngBounds$Builder()
    {
      super();
      this.a = Double.POSITIVE_INFINITY;
      this.b = Double.NEGATIVE_INFINITY;
      this.c = Double.NaN;
      this.d = Double.NaN;
    }

    private com.google.android.gms.maps.model.LatLngBounds$Builder a(
            com.google.android.gms.maps.model.LatLng p0)
    {
      boolean v2 = false;
      double b = 0.0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = true;
            this.a = Math.min(this.a, p0.a);
            this.b = Math.max(this.b, p0.a);
            b = p0.b;
            if ( !(Double.isNaN(this.c)) ) { _pc = 2; continue _sm; }
            this.c = b;
            _pc = 1;
            continue _sm;
          case 1:
            this.d = b;
            return this;
          case 2:
            if ( this.c > this.d )
            {
            if ( this.c > b )
            v2 = b <= this.d;
            }
            else if ( this.c > b || b > this.d )
            {
            v2 = false;
            }
            if ( !v2 )
            {
            if ( LatLngBounds.d(this.c, b) < LatLngBounds.e(this.d, b) )
            {
            this.c = b;
            return this;
            }
            { _pc = 1; continue _sm; }
            }
            return this;
        }
      }
}

    private com.google.android.gms.maps.model.LatLngBounds a()
    {
      hn.a(!Double.isNaN(this.c), "no included points");
      return new com.google.android.gms.maps.model.LatLngBounds(new com.google.android.gms.maps.model.LatLng(this.a, this.c), new com.google.android.gms.maps.model.LatLng(this.b, this.d));
    }

    private boolean a(double p0)
    {
      boolean v2;
      v2 = true;
      if ( this.c > this.d )
      {
        if ( this.c > p0 )
          return p0 <= this.d;
      }
      else if ( this.c > p0 || p0 > this.d )
      {
        return false;
      }
      return v2;
    }

}
