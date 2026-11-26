// Decompiled from classes.dex (SourceFile: Request$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import java.net.URLEncoder;
class Request$5 implements com.facebook.Request$KeyValueSerializer {
    // Fields
    final com.facebook.Request this$0;
    final java.util.ArrayList val$keysAndValues;

    // Methods
    Request$5(com.facebook.Request p0, java.util.ArrayList p1)
    {
      super();
      this.this$0 = p0;
      this.val$keysAndValues = p1;
    
    }

    public void writeString(String p0, String p1)
 throws java.io.UnsupportedEncodingException {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = p0;
      v3[1] = URLEncoder.encode(p1, "UTF-8");
      this.val$keysAndValues.add(String.format("%s=%s", v3));
    }

}
