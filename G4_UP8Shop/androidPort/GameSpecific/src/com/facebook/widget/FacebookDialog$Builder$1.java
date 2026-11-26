// Decompiled from classes.dex (SourceFile: FacebookDialog$Builder$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class FacebookDialog$Builder$1 implements com.facebook.widget.FacebookDialog$OnPresentCallback {
    // Fields
    final com.facebook.widget.FacebookDialog$Builder this$0;

    // Methods
    FacebookDialog$Builder$1(com.facebook.widget.FacebookDialog$Builder p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onPresent(android.content.Context p0)
    {
      if ( this.this$0.imageAttachments != null && this.this$0.imageAttachments.size() > 0 )
        FacebookDialog.access$900().addAttachmentsForCall(p0, this.this$0.appCall.getCallId(), this.this$0.imageAttachments);
      if ( this.this$0.mediaAttachmentFiles != null && this.this$0.mediaAttachmentFiles.size() > 0 )
        FacebookDialog.access$900().addAttachmentFilesForCall(p0, this.this$0.appCall.getCallId(), this.this$0.mediaAttachmentFiles);
    }

}
