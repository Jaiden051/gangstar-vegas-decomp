// Decompiled from classes.dex (SourceFile: BidiFormatter$DirectionalityEstimator.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

class BidiFormatter$DirectionalityEstimator {
    // Fields
    private static int a;
    private static final byte[] b;
    private final java.lang.String c;
    private final boolean d;
    private final int e;
    private int f;
    private char g;

    // Methods
    static
    {
      int i;
      b = new byte[1792];
      for ( i = 0; i < 1792; ++i )
        b[i] = Character.getDirectionality(i);
    }

    BidiFormatter$DirectionalityEstimator(String p0, boolean p1)
    {
      super();
      this.c = p0;
      this.d = false;
      this.e = p0.length();
    }

    private byte c()
    {
      int v1;
      int v2;
      byte CachedDirectionality; // RETVAL
      int v5;
      int v6;
      int g;
      int v8;
      char v9; // RETVAL
      int f;
      char v11; // RETVAL
    
      v1 = 12;
      this.g = this.c.charAt(this.f);
      if ( Character.isHighSurrogate(this.g) )
      {
        v2 = Character.codePointAt(this.c, this.f);
        this.f += Character.charCount(v2);
        return Character.getDirectionality(v2);
      }
      ++this.f;
      CachedDirectionality = getCachedDirectionality(this.g);
      if ( !this.d )
        return CachedDirectionality;
      if ( this.g != 60 )
      {
        if ( this.g == 38 )
        {
          do
          {
            if ( this.f >= this.e )
              break;
            f = this.f;
            this.f = f + 1;
            v11 = this.c.charAt(f);
            this.g = v11;
          }
          while ( v11 != 59 );
          return (byte)v1;
        }
        return CachedDirectionality;
      }
      v5 = this.f;
      while ( this.f < this.e )
      {
        v6 = this.f;
        this.f = v6 + 1;
        this.g = this.c.charAt(v6);
        if ( this.g == 62 )
          return (byte)v1;
        if ( this.g == 34 || this.g == 39 )
        {
          g = this.g;
          do
          {
            if ( this.f >= this.e )
              break;
            v8 = this.f;
            this.f = v8 + 1;
            v9 = this.c.charAt(v8);
            this.g = v9;
          }
          while ( v9 != g );
        }
      }
      this.f = v5;
      this.g = '<';
      return (byte)13;
    }

    private byte d()
    {
      int v1;
      int v2;
      byte CachedDirectionality; // RETVAL
      int f;
      int v6;
      int g;
      int v8;
      char v9; // RETVAL
      int v10;
      int v11;
      v1 = 12;
      this.g = this.c.charAt(this.f - 1);
      if ( Character.isLowSurrogate(this.g) )
      {
        v2 = Character.codePointBefore(this.c, this.f);
        this.f -= Character.charCount(v2);
        return Character.getDirectionality(v2);
      }
      --this.f;
      CachedDirectionality = getCachedDirectionality(this.g);
      if ( this.d )
      {
        if ( this.g == 62 )
        {
          f = this.f;
          while ( this.f > 0 )
          {
            v6 = this.f - 1;
            this.f = v6;
            this.g = this.c.charAt(v6);
            if ( this.g == 60 )
              return (byte)v1;
            if ( this.g == 62 )
              break;
            if ( this.g == 34 || this.g == 39 )
            {
              g = this.g;
              do
              {
                if ( this.f <= 0 )
                  break;
                v8 = this.f - 1;
                this.f = v8;
                v9 = this.c.charAt(v8);
                this.g = v9;
              }
              while ( v9 != g );
            }
          }
          this.f = f;
          this.g = '>';
          return (byte)13;
        }
        if ( this.g == 59 )
        {
          v10 = this.f;
          do
          {
            if ( this.f <= 0 )
              break;
            v11 = this.f - 1;
            this.f = v11;
            this.g = this.c.charAt(v11);
            if ( this.g == 38 )
              return (byte)v1;
          }
          while ( this.g != 59 );
          this.f = v10;
          this.g = ';';
          return (byte)13;
        }
      }
      return CachedDirectionality;
    }

    private byte e()
    {
      int f;
      int v2;
      int g;
      int v6;
      char v7; // RETVAL
    
      f = this.f;
      while ( this.f < this.e )
      {
        v2 = this.f;
        this.f = v2 + 1;
        this.g = this.c.charAt(v2);
        if ( this.g == 62 )
          return (byte)12;
        if ( this.g == 34 || this.g == 39 )
        {
          g = this.g;
          do
          {
            if ( this.f >= this.e )
              break;
            v6 = this.f;
            this.f = v6 + 1;
            v7 = this.c.charAt(v6);
            this.g = v7;
          }
          while ( v7 != g );
        }
      }
      this.f = f;
      this.g = '<';
      return (byte)13;
    }

    private byte f()
    {
      int f;
      int v2;
      int g;
      int v6;
      char v7; // RETVAL
    
      f = this.f;
      while ( this.f > 0 )
      {
        v2 = this.f - 1;
        this.f = v2;
        this.g = this.c.charAt(v2);
        if ( this.g == 60 )
          return (byte)12;
        if ( this.g == 62 )
          break;
        if ( this.g == 34 || this.g == 39 )
        {
          g = this.g;
          do
          {
            if ( this.f <= 0 )
              break;
            v6 = this.f - 1;
            this.f = v6;
            v7 = this.c.charAt(v6);
            this.g = v7;
          }
          while ( v7 != g );
        }
      }
      this.f = f;
      this.g = '>';
      return (byte)13;
    }

    private byte g()
    {
      int f;
      char v2; // RETVAL
    
      do
      {
        if ( this.f >= this.e )
          break;
        f = this.f;
        this.f = f + 1;
        v2 = this.c.charAt(f);
        this.g = v2;
      }
      while ( v2 != 59 );
      return (byte)12;
    }

    private static byte getCachedDirectionality(char p0)
    {
      if ( (int)p0 >= 1792 )
        return Character.getDirectionality(p0);
      else
        return b[p0];
    }

    private byte h()
    {
      int f;
      int v2;
      f = this.f;
      do
      {
        if ( this.f <= 0 )
          break;
        v2 = this.f - 1;
        this.f = v2;
        this.g = this.c.charAt(v2);
        if ( this.g == 38 )
          return (byte)12;
      }
      while ( this.g != 59 );
      this.f = f;
      this.g = ';';
      return (byte)13;
    }

    final int a()
    {
      int v1 = 0;
      int v2 = 0;
      int v3 = 0;
      int v4 = 0;
      int v5 = 0;
      int Directionality = 0;
      int f = 0;
      int v8 = 0;
      int g = 0;
      int v10 = 0;
      char v11 = 0; // RETVAL
      int v12 = 0;
      char v13 = 0; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = -1;
            this.f = 0;
            v2 = 0;
            v3 = 0;
            v4 = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(this.f < this.e && v2 == 0) ) { _pc = 11; continue _sm; }
            this.g = this.c.charAt(this.f);
            if ( Character.isHighSurrogate(this.g) )
            {
            v5 = Character.codePointAt(this.c, this.f);
            this.f += Character.charCount(v5);
            Directionality = Character.getDirectionality(v5);
            }
            else
            {
            ++this.f;
            Directionality = getCachedDirectionality(this.g);
            if ( this.d )
            {
            if ( this.g == 60 )
            {
            f = this.f;
            while ( this.f < this.e )
            {
            v8 = this.f;
            this.f = v8 + 1;
            this.g = this.c.charAt(v8);
            if ( this.g == 62 )
            {
            Directionality = 12;
            { _pc = 2; continue _sm; }
            }
            if ( this.g == 34 || this.g == 39 )
            {
            g = this.g;
            do
            {
            if ( this.f >= this.e )
            break;
            v10 = this.f;
            this.f = v10 + 1;
            v11 = this.c.charAt(v10);
            this.g = v11;
            }
            while ( v11 != g );
            }
            }
            this.f = f;
            this.g = '<';
            Directionality = 13;
            }
            else if ( this.g == 38 )
            {
            do
            {
            if ( this.f >= this.e )
            break;
            v12 = this.f;
            this.f = v12 + 1;
            v13 = this.c.charAt(v12);
            this.g = v13;
            }
            while ( v13 != 59 );
            Directionality = 12;
            }
            }
            }
            _pc = 2;
            continue _sm;
          case 2:
            _sw_1 = (Directionality);
            if ( (_sw_1 == (0)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (1)) || (_sw_1 == (2)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (14)) || (_sw_1 == (15)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (16)) || (_sw_1 == (17)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 8; continue _sm; }
            _pc = 9;
            continue _sm;
          case 3:
            if ( v4 == 0 )
            return v1;
            v2 = v4;
            _pc = 1;
            continue _sm;
          case 4:
            if ( v4 == 0 )
            return 1;
            v2 = v4;
            _pc = 10;
            continue _sm;
          case 5:
            _pc = 1;
            continue _sm;
          case 6:
            ++v4;
            v3 = -1;
            _pc = 1;
            continue _sm;
          case 7:
            ++v4;
            v3 = 1;
            _pc = 1;
            continue _sm;
          case 8:
            --v4;
            v3 = 0;
            _pc = 1;
            continue _sm;
          case 9:
            v2 = v4;
            _pc = 1;
            continue _sm;
          case 10:
            _pc = 1;
            continue _sm;
          case 11:
            if ( v2 == 0 )
            return 0;
            if ( v3 == 0 )
            {
            while ( true )
            {
            if ( this.f <= 0 )
            return 0;
            switch ( this.d() )
            {
            case 14:
            case 15:
            if ( v2 == v4 )
            return v1;
            --v4;
            continue;
            case 16:
            case 17:
            if ( v2 == v4 )
            return 1;
            --v4;
            break;
            case 18:
            ++v4;
            continue;
            default:
            continue;
            }
            }
            }
            return v3;
        }
      }
}

    final int b()
    {
      int v1;
      int v2;
      int v3;
      v1 = 0;
      this.f = this.e;
      v2 = 0;
      v3 = 0;
      while ( true )
      {
        if ( this.f <= 0 )
          return v1;
        switch ( this.d() )
        {
          case 0:
            if ( v3 != 0 )
            {
              if ( v2 == 0 )
                v2 = v3;
              continue;
            }
            return -1;
          case 1:
          case 2:
            if ( v3 == 0 )
              return 1;
            if ( v2 == 0 )
              v2 = v3;
            continue;
          case 9:
            continue;
          case 14:
          case 15:
            if ( v2 == v3 )
              return -1;
            --v3;
            continue;
          case 16:
          case 17:
            if ( v2 == v3 )
              return 1;
            --v3;
            continue;
          case 18:
            ++v3;
            continue;
          default:
            if ( v2 == 0 )
              v2 = v3;
            continue;
        }
      }
    }

}
