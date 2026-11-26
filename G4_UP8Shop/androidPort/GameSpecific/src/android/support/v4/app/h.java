// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class h {
    // Fields
    public java.lang.reflect.Method a;
    public java.lang.reflect.Method b;
    public android.widget.ImageView c;

    // Methods
    h(android.app.Activity p0)
    {
      super();
      Class[] v2;
      Class[] v3;
      android.view.View ViewById; // RETVAL
      android.view.ViewGroup v5;
      android.view.View ChildAt;
      android.view.View v7;
      try
      {
        v2 = new Class[1];
        v2[0] = android.graphics.drawable.Drawable.class;
        this.a = android.app.ActionBar.class.getDeclaredMethod("setHomeAsUpIndicator", v2);
        v3 = new Class[1];
        v3[0] = Integer.TYPE;
        this.b = android.app.ActionBar.class.getDeclaredMethod("setHomeActionContentDescription", v3);
      }
      catch ( NoSuchMethodException e )
      {
        ViewById = p0.findViewById(16908332);
        if ( ViewById != null )
        {
          v5 = (android.view.ViewGroup)ViewById.getParent();
          if ( v5.getChildCount() == 2 )
          {
            ChildAt = v5.getChildAt(0);
            v7 = v5.getChildAt(1);
            if ( ChildAt.getId() != 16908332 )
              v7 = ChildAt;
            if ( v7 instanceof android.widget.ImageView )
              this.c = (android.widget.ImageView)v7;
          }
        }
      }
    
    }

}
