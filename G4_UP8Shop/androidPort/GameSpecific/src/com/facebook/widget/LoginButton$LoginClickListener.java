// Decompiled from classes.dex (SourceFile: LoginButton$LoginClickListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.AppEventsLogger;
import com.facebook.Session;
import com.facebook.internal.SessionAuthorizationType;
class LoginButton$LoginClickListener implements android.view.View.OnClickListener {
    // Fields
    final com.facebook.widget.LoginButton this$0;

    // Methods
    private LoginButton$LoginClickListener(com.facebook.widget.LoginButton p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ LoginButton$LoginClickListener(com.facebook.widget.LoginButton p0, com.facebook.widget.LoginButton$1 p1)
    {
      this(p0);
    }

    public void onClick(android.view.View p0)
    {
      android.content.Context Context;
      com.facebook.Session OpenSession;
      String String;
      String v5;
      String v6;
      Object[] v7;
      String v8;
      android.app.AlertDialog.Builder v9;
      com.facebook.AppEventsLogger v10;
      android.os.Bundle v11;
      com.facebook.Session Session; // RETVAL
      com.facebook.Session v13;
      com.facebook.Session$OpenRequest v14;
      android.content.Context BaseContext; // RETVAL
    
      Context = this.this$0.getContext();
      OpenSession = LoginButton.access$400(this.this$0).getOpenSession();
      if ( OpenSession != null )
      {
        if ( LoginButton.access$700(this.this$0) )
        {
          String = this.this$0.getResources().getString(2131165502);
          v5 = this.this$0.getResources().getString(2131165503);
          if ( LoginButton.access$500(this.this$0) != null && LoginButton.access$500(this.this$0).getName() != null )
          {
            v6 = this.this$0.getResources().getString(2131165500);
            v7 = new Object[1];
            v7[0] = LoginButton.access$500(this.this$0).getName();
            v8 = String.format(v6, v7);
          }
          else
          {
            v8 = this.this$0.getResources().getString(2131165501);
          }
          v9 = new android.app.AlertDialog.Builder(Context);
          v9.setMessage(v8).setCancelable(true).setPositiveButton(String, (android.content.DialogInterface.OnClickListener)new com.facebook.widget.LoginButton$LoginClickListener$1(this, OpenSession)).setNegativeButton(v5, null);
          v9.create().show();
        }
        else
        {
          OpenSession.closeAndClearTokenInformation();
        }
      }
      else
      {
        Session = LoginButton.access$400(this.this$0).getSession();
        v13 = Session;
        if ( Session == null || Session.getState().isClosed() )
        {
          LoginButton.access$400(this.this$0).setSession(null);
          v13 = new com.facebook.Session$Builder(Context).setApplicationId(LoginButton.access$800(this.this$0)).build();
          Session.setActiveSession(v13);
        }
        if ( !v13.isOpened() )
        {
          if ( LoginButton.access$900(this.this$0) != null )
          {
            v14 = new com.facebook.Session$OpenRequest(LoginButton.access$900(this.this$0));
          }
          else if ( Context instanceof android.app.Activity )
          {
            v14 = new com.facebook.Session$OpenRequest((android.app.Activity)Context);
          }
          else if ( Context instanceof android.content.ContextWrapper
                 && (com.gameloft.android.DecompRT.comma((BaseContext = ((android.content.ContextWrapper)Context).getBaseContext()), (BaseContext instanceof android.app.Activity))) )
          {
            v14 = new com.facebook.Session$OpenRequest((android.app.Activity)BaseContext);
          }
          else
          {
            v14 = null;
          }
          if ( v14 != null )
          {
            v14.setDefaultAudience(LoginButton$LoginButtonProperties.access$1100(LoginButton.access$1000(this.this$0)));
            v14.setPermissions(LoginButton$LoginButtonProperties.access$1200(LoginButton.access$1000(this.this$0)));
            v14.setLoginBehavior(LoginButton$LoginButtonProperties.access$1300(LoginButton.access$1000(this.this$0)));
            if ( SessionAuthorizationType.PUBLISH.equals(LoginButton$LoginButtonProperties.access$1400(LoginButton.access$1000(this.this$0))) )
            {
              v13.openForPublish(v14);
            }
            else
            {
              v13.openForRead(v14);
            }
          }
        }
      }
      v10 = AppEventsLogger.newLogger(this.this$0.getContext());
      v11 = new android.os.Bundle();
      v11.putInt("logging_in", com.gameloft.android.DecompRT.b2i(OpenSession == null));
      v10.logSdkEvent(LoginButton.access$1500(this.this$0), null, v11);
      if ( LoginButton.access$1600(this.this$0) != null )
        LoginButton.access$1600(this.this$0).onClick(p0);
    }

}
