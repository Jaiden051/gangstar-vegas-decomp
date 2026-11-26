// Decompiled from classes.dex (SourceFile: DebugUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public class DebugUtils {
    // Methods
    public DebugUtils()
    {
      super();
    }

    public static void buildShortClassTag(Object p0, StringBuilder p1)
    {
      String SimpleName; // RETVAL
      String Name;
      int IndexOf; // RETVAL
    
      if ( p0 != null )
      {
        SimpleName = p0.getClass().getSimpleName();
        Name = SimpleName;
        if ( SimpleName == null || SimpleName.length() <= 0 )
        {
          Name = p0.getClass().getName();
          IndexOf = Name.lastIndexOf(46);
          if ( IndexOf > 0 )
            Name = Name.substring(IndexOf + 1);
        }
        p1.append(Name);
        p1.append('{');
        p1.append(Integer.toHexString(System.identityHashCode(p0)));
      }
      else
      {
        p1.append("null");
      }
    }

}
