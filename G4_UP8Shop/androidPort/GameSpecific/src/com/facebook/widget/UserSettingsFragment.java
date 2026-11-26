// Decompiled from classes.dex (SourceFile: UserSettingsFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import com.facebook.Request;
import com.facebook.Session;
import com.facebook.internal.ImageDownloader;
import com.facebook.internal.ImageRequest;
import java.util.Arrays;
public class UserSettingsFragment extends com.facebook.widget.FacebookFragment {
    // Fields
    private static java.lang.String FIELDS;
    private static java.lang.String ID;
    private static java.lang.String NAME;
    private static java.lang.String PICTURE;
    private static final java.lang.String REQUEST_FIELDS;
    private android.widget.TextView connectedStateLabel;
    private com.facebook.widget.LoginButton loginButton;
    private com.facebook.widget.LoginButton$LoginButtonProperties loginButtonProperties;
    private com.facebook.Session$StatusCallback sessionStatusCallback;
    private com.facebook.model.GraphUser user;
    private com.facebook.Session userInfoSession;
    private android.graphics.drawable.Drawable userProfilePic;
    private java.lang.String userProfilePicID;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[3];
      v0[0] = "id";
      v0[1] = "name";
      v0[2] = "picture";
      REQUEST_FIELDS = TextUtils.join(",", v0);
    }

    public UserSettingsFragment()
    {
      super();
      this.loginButtonProperties = new com.facebook.widget.LoginButton$LoginButtonProperties();
    }

    /* synthetic */ static com.facebook.model.GraphUser access$000(
            com.facebook.widget.UserSettingsFragment p0)
    {
      return p0.user;
    }

    /* synthetic */ static com.facebook.model.GraphUser access$002(
            com.facebook.widget.UserSettingsFragment p0,
            com.facebook.model.GraphUser p1)
    {
      p0.user = p1;
      return p1;
    }

    /* synthetic */ static void access$100(com.facebook.widget.UserSettingsFragment p0)
    {
      p0.updateUI();
    }

    /* synthetic */ static com.facebook.widget.LoginButton access$200(
            com.facebook.widget.UserSettingsFragment p0)
    {
      return p0.loginButton;
    }

    /* synthetic */ static void access$300(
            com.facebook.widget.UserSettingsFragment p0,
            String p1,
            com.facebook.internal.ImageResponse p2)
    {
      p0.processImageResponse(p1, p2);
    }

    private void fetchUserInfo()
    {
      com.facebook.Session Session; // RETVAL
      com.facebook.Session v2;
      com.facebook.Request v3; // RETVAL
      android.os.Bundle v4;
      com.facebook.Request[] v5;
      Session = this.getSession();
      v2 = Session;
      if ( Session != null && Session.isOpened() )
      {
        if ( v2 != this.userInfoSession )
        {
          v3 = Request.newMeRequest(
                 v2,
                 (com.facebook.Request$GraphUserCallback)new com.facebook.widget.UserSettingsFragment$1(this, v2));
          v4 = new android.os.Bundle();
          v4.putString("fields", REQUEST_FIELDS);
          v3.setParameters(v4);
          v5 = new com.facebook.Request[1];
          v5[0] = v3;
          Request.executeBatchAsync(v5);
          this.userInfoSession = v2;
        }
      }
      else
      {
        this.user = null;
      }
    }

    private com.facebook.internal.ImageRequest getImageRequest()
    {
      com.facebook.internal.ImageRequest v1;
      v1 = null;
      try
      {
        return new com.facebook.internal.ImageRequest$Builder(this.getActivity(), ImageRequest.getProfilePictureUrl(
                                                                                    this.user.getId(),
                                                                                    this.getResources().getDimensionPixelSize(2131361867),
                                                                                    this.getResources().getDimensionPixelSize(2131361868))).setCallerTag(this).setCallback((com.facebook.internal.ImageRequest$Callback)new com.facebook.widget.UserSettingsFragment$2(this)).build();
      }
      catch ( java.net.URISyntaxException e )
      {
      }
      return v1;
    }

    private void processImageResponse(String p0, com.facebook.internal.ImageResponse p1)
    {
      android.graphics.Bitmap Bitmap;
      android.graphics.drawable.BitmapDrawable v4;
      if ( p1 != null )
      {
        Bitmap = p1.getBitmap();
        if ( Bitmap != null )
        {
          v4 = new android.graphics.drawable.BitmapDrawable(this.getResources(), Bitmap);
          v4.setBounds(0, 0, this.getResources().getDimensionPixelSize(2131361867), this.getResources().getDimensionPixelSize(2131361868));
          this.userProfilePic = v4;
          this.userProfilePicID = p0;
          this.connectedStateLabel.setCompoundDrawables(null, v4, null, null);
          this.connectedStateLabel.setTag(p1.getRequest().getImageUri());
        }
      }
    }

    private void updateUI()
    {
      com.facebook.internal.ImageRequest ImageRequest; // RETVAL
      com.facebook.internal.ImageRequest v2;
      java.net.URI ImageUri;
      android.graphics.drawable.Drawable Drawable;
      int Color; // RETVAL
    
      if ( this.isAdded() )
      {
        if ( this.isSessionOpen() )
        {
          this.connectedStateLabel.setTextColor(this.getResources().getColor(2131230766));
          this.connectedStateLabel.setShadowLayer(1.0f, 0.0f, -1.0f, this.getResources().getColor(2131230767));
          if ( this.user != null )
          {
            ImageRequest = this.getImageRequest();
            v2 = ImageRequest;
            if ( ImageRequest != null )
            {
              ImageUri = ImageRequest.getImageUri();
              if ( !ImageUri.equals(this.connectedStateLabel.getTag()) )
              {
                if ( this.user.getId().equals(this.userProfilePicID) )
                {
                  this.connectedStateLabel.setCompoundDrawables(null, this.userProfilePic, null, null);
                  this.connectedStateLabel.setTag(ImageUri);
                }
                else
                {
                  ImageDownloader.downloadAsync(v2);
                }
              }
            }
            this.connectedStateLabel.setText(this.user.getName());
          }
          else
          {
            this.connectedStateLabel.setText(this.getResources().getString(2131165506));
            Drawable = this.getResources().getDrawable(2130837550);
            Drawable.setBounds(0, 0, this.getResources().getDimensionPixelSize(2131361867), this.getResources().getDimensionPixelSize(2131361868));
            this.connectedStateLabel.setCompoundDrawables(null, Drawable, null, null);
          }
        }
        else
        {
          Color = this.getResources().getColor(2131230768);
          this.connectedStateLabel.setTextColor(Color);
          this.connectedStateLabel.setShadowLayer(0.0f, 0.0f, 0.0f, Color);
          this.connectedStateLabel.setText(this.getResources().getString(2131165507));
          this.connectedStateLabel.setCompoundDrawables(null, null, null, null);
          this.connectedStateLabel.setTag(null);
        }
      }
    }

    public void clearPermissions()
    {
      this.loginButtonProperties.clearPermissions();
    }

    public com.facebook.SessionDefaultAudience getDefaultAudience()
    {
      return this.loginButtonProperties.getDefaultAudience();
    }

    public com.facebook.SessionLoginBehavior getLoginBehavior()
    {
      return this.loginButtonProperties.getLoginBehavior();
    }

    public com.facebook.widget.LoginButton$OnErrorListener getOnErrorListener()
    {
      return this.loginButtonProperties.getOnErrorListener();
    }

    java.util.List<String> getPermissions()
    {
      return this.loginButtonProperties.getPermissions();
    }

    public com.facebook.Session$StatusCallback getSessionStatusCallback()
    {
      return this.sessionStatusCallback;
    }

    /* bridge */ public void onActivityCreated(android.os.Bundle p0)
    {
      super.onActivityCreated(p0);
    }

    /* bridge */ public void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      super.onActivityResult(p0, p1, p2);
    }

    public void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.setRetainInstance(true);
    }

    public android.view.View onCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      android.view.View v4;
      com.facebook.Session Session;
      v4 = p0.inflate(2130903055, p1, false);
      this.loginButton = (com.facebook.widget.LoginButton)v4.findViewById(2131427392);
      this.loginButton.setProperties(this.loginButtonProperties);
      this.loginButton.setFragment(this);
      this.loginButton.setLoginLogoutEventName("fb_user_settings_vc_usage");
      Session = this.getSession();
      if ( Session != null && !Session.equals(Session.getActiveSession()) )
        this.loginButton.setSession(Session);
      this.connectedStateLabel = (android.widget.TextView)v4.findViewById(2131427391);
      if ( v4.getBackground() != null )
        v4.getBackground().setDither(true);
      else
        v4.setBackgroundColor(this.getResources().getColor(2131230765));
      return v4;
    }



    public void onResume()
    {
      super.onResume();
      this.fetchUserInfo();
      this.updateUI();
    }

    protected void onSessionStateChange(com.facebook.SessionState p0, Exception p1)
    {
      this.fetchUserInfo();
      this.updateUI();
      if ( this.sessionStatusCallback != null )
        this.sessionStatusCallback.call(this.getSession(), p0, p1);
    }

    public void setDefaultAudience(com.facebook.SessionDefaultAudience p0)
    {
      this.loginButtonProperties.setDefaultAudience(p0);
    }

    public void setLoginBehavior(com.facebook.SessionLoginBehavior p0)
    {
      this.loginButtonProperties.setLoginBehavior(p0);
    }

    public void setOnErrorListener(com.facebook.widget.LoginButton$OnErrorListener p0)
    {
      this.loginButtonProperties.setOnErrorListener(p0);
    }

    public void setPublishPermissions(java.util.List<String> p0)
    {
      this.loginButtonProperties.setPublishPermissions(p0, this.getSession());
    }

    public void setPublishPermissions(String[] p0)
    {
      this.loginButtonProperties.setPublishPermissions(Arrays.asList(p0), this.getSession());
    }

    public void setReadPermissions(java.util.List<String> p0)
    {
      this.loginButtonProperties.setReadPermissions(p0, this.getSession());
    }

    public void setReadPermissions(String[] p0)
    {
      this.loginButtonProperties.setReadPermissions(Arrays.asList(p0), this.getSession());
    }

    public void setSession(com.facebook.Session p0)
    {
      super.setSession(p0);
      if ( this.loginButton != null )
        this.loginButton.setSession(p0);
      this.fetchUserInfo();
      this.updateUI();
    }

    public void setSessionStatusCallback(com.facebook.Session$StatusCallback p0)
    {
      this.sessionStatusCallback = p0;
    }

}
