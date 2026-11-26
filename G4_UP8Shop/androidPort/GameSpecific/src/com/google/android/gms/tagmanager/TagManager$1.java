// Decompiled from classes.dex (SourceFile: TagManager$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class TagManager$1 implements com.google.android.gms.tagmanager.DataLayer$b {
    // Fields
    final com.google.android.gms.tagmanager.TagManager a;

    // Methods
    TagManager$1(com.google.android.gms.tagmanager.TagManager p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(java.util.Map<String, Object> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      Object v2; // RETVAL
    
      v2 = p0.get("event");
      if ( v2 != null )
        TagManager.a(this.a, v2.toString());
    }

}
