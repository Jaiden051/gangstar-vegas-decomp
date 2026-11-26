// Decompiled from classes.dex (SourceFile: ShareCompat$ShareCompatImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class ShareCompat$ShareCompatImplBase implements android.support.v4.app.ax {
    // Methods
    ShareCompat$ShareCompatImplBase()
    {
      super();
    }

    private static void withinStyle(StringBuilder p0, CharSequence p1, int p2, int p3)
    {
      char v5; // RETVAL
    
      while ( p2 < p3 )
      {
        v5 = p1.charAt(p2);
        switch ( v5 )
        {
          case '<':
            p0.append("&lt;");
            break;
          case '>':
            p0.append("&gt;");
            break;
          case '&':
            p0.append("&amp;");
            break;
          default:
            if ( (int)v5 <= 126 && (int)v5 >= 32 )
            {
              if ( v5 == 32 )
              {
                while ( p2 + 1 < p3 && p1.charAt(p2 + 1) == 32 )
                {
                  p0.append("&nbsp;");
                  ++p2;
                }
                p0.append(' ');
              }
              else
              {
                p0.append(v5);
              }
            }
            else
            {
              p0.append("&#" + v5 + ";");
            }
            break;
        }
        ++p2;
      }
    }

    public String a(CharSequence p0)
    {
      StringBuilder v2;
      v2 = new StringBuilder();
      withinStyle(v2, p0, 0, p0.length());
      return v2.toString();
    }

    public void a(
            android.view.MenuItem p0,
            android.support.v4.app.ShareCompat$IntentBuilder p1)
    {
      p0.setIntent(p1.c());
    }

}
