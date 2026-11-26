// Decompiled from classes.dex (SourceFile: DatabaseUtilsCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.database;

import android.text.TextUtils;
public class DatabaseUtilsCompat {
    // Methods
    private DatabaseUtilsCompat()
    {
      super();
    }

    public static String[] appendSelectionArgs(String[] p0, String[] p1)
    {
      String[] v3;
      if ( p0 != null && p0.length != 0 )
      {
        v3 = new String[(p0.length + p1.length)];
        System.arraycopy(p0, 0, v3, 0, p0.length);
        System.arraycopy(p1, 0, v3, p0.length, p1.length);
        return v3;
      }
      return p1;
    }

    public static String concatenateWhere(String p0, String p1)
    {
      if ( !TextUtils.isEmpty(p0) )
      {
        if ( TextUtils.isEmpty(p1) )
          return p0;
        else
          return "(" + p0 + ") AND (" + p1 + ")";
      }
      return p1;
    }

}
