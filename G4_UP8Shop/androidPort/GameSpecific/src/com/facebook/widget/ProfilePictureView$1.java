// Decompiled from classes.dex (SourceFile: ProfilePictureView$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class ProfilePictureView$1 implements com.facebook.internal.ImageRequest$Callback {
    // Fields
    final com.facebook.widget.ProfilePictureView this$0;

    // Methods
    ProfilePictureView$1(com.facebook.widget.ProfilePictureView p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.internal.ImageResponse p0)
    {
      ProfilePictureView.access$000(this.this$0, p0);
    }

}
