// Decompiled from classes.dex (SourceFile: UserSettingsFragment$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class UserSettingsFragment$1 implements com.facebook.Request$GraphUserCallback {
    // Fields
    final com.facebook.widget.UserSettingsFragment this$0;
    final com.facebook.Session val$currentSession;

    // Methods
    UserSettingsFragment$1(com.facebook.widget.UserSettingsFragment p0, com.facebook.Session p1)
    {
      super();
      this.this$0 = p0;
      this.val$currentSession = p1;
    
    }

    public void onCompleted(com.facebook.model.GraphUser p0, com.facebook.Response p1)
    {
      if ( this.val$currentSession == this.this$0.getSession() )
      {
        UserSettingsFragment.access$002(this.this$0, p0);
        UserSettingsFragment.access$100(this.this$0);
      }
      if ( p1.getError() != null )
        UserSettingsFragment.access$200(this.this$0).handleError(p1.getError().getException());
    }

}
