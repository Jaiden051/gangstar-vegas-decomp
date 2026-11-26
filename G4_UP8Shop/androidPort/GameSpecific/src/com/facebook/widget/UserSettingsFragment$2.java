// Decompiled from classes.dex (SourceFile: UserSettingsFragment$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class UserSettingsFragment$2 implements com.facebook.internal.ImageRequest$Callback {
    // Fields
    final com.facebook.widget.UserSettingsFragment this$0;

    // Methods
    UserSettingsFragment$2(com.facebook.widget.UserSettingsFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.internal.ImageResponse p0)
    {
      UserSettingsFragment.access$300(this.this$0, UserSettingsFragment.access$000(this.this$0).getId(), p0);
    }

}
