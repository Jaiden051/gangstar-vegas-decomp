// Decompiled from classes.dex (SourceFile: FacebookDialog$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.content.Intent;
import com.facebook.NativeAppCallContentProvider;
import com.facebook.internal.NativeProtocol;
import com.facebook.internal.ServerProtocol;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import java.util.UUID;
public abstract class FacebookDialog$Builder<CONCRETE extends com.facebook.widget.FacebookDialog$Builder<?>> {
    // Fields
    protected final android.app.Activity activity;
    protected final com.facebook.widget.FacebookDialog$PendingCall appCall;
    protected final java.lang.String applicationId;
    protected java.lang.String applicationName;
    protected android.support.v4.app.Fragment fragment;
    protected java.util.HashMap imageAttachments;
    protected java.util.HashMap mediaAttachmentFiles;

    // Methods
    public FacebookDialog$Builder(android.app.Activity p0)
    {
      super();
      this.imageAttachments = new java.util.HashMap();
      this.mediaAttachmentFiles = new java.util.HashMap();
      Validate.notNull(p0, "activity");
      this.activity = p0;
      this.applicationId = Utility.getMetadataApplicationId(p0);
      this.appCall = new com.facebook.widget.FacebookDialog$PendingCall(64207);
    }

    protected CONCRETE addImageAttachment(String p0, android.graphics.Bitmap p1)
    {
      this.imageAttachments.put(p0, p1);
      return (CONCRETE)this;
    }

    protected CONCRETE addImageAttachment(String p0, java.io.File p1)
    {
      this.mediaAttachmentFiles.put(p0, p1);
      return (CONCRETE)this;
    }

    protected java.util.List<String> addImageAttachmentFiles(java.util.Collection<java.io.File> p0)
    {
      java.util.ArrayList v2;
      java.util.Iterator v3;
      java.io.File v4;
      String v5;
      v2 = new java.util.ArrayList();
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        v4 = (java.io.File)v3.next();
        v5 = UUID.randomUUID().toString();
        this.addImageAttachment(v5, v4);
        v2.add(NativeAppCallContentProvider.getAttachmentUrl(this.applicationId, this.appCall.getCallId(), v5));
      }
      return v2;
    }

    protected java.util.List<String> addImageAttachments(
            java.util.Collection<android.graphics.Bitmap> p0)
    {
      java.util.ArrayList v2;
      java.util.Iterator v3;
      android.graphics.Bitmap v4;
      String v5;
      v2 = new java.util.ArrayList();
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        v4 = (android.graphics.Bitmap)v3.next();
        v5 = UUID.randomUUID().toString();
        this.addImageAttachment(v5, v4);
        v2.add(NativeAppCallContentProvider.getAttachmentUrl(this.applicationId, this.appCall.getCallId(), v5));
      }
      return v2;
    }

    protected CONCRETE addVideoAttachment(String p0, java.io.File p1)
    {
      this.mediaAttachmentFiles.put(p0, p1);
      return (CONCRETE)this;
    }

    protected String addVideoAttachmentFile(java.io.File p0)
    {
      String v2;
      v2 = UUID.randomUUID().toString();
      this.addVideoAttachment(v2, p0);
      return NativeAppCallContentProvider.getAttachmentUrl(this.applicationId, this.appCall.getCallId(), v2);
    }

    public com.facebook.widget.FacebookDialog build()
    {
      String v1;
      int v2;
      android.os.Bundle MethodArguments;
      android.content.Intent PlatformActivityIntent; // RETVAL
    
      this.validate();
      v1 = FacebookDialog.access$100(this.getDialogFeatures());
      v2 = FacebookDialog.access$300(
             this.activity,
             v1,
             FacebookDialog.access$200(this.applicationId, v1, this.getDialogFeatures()));
      if ( NativeProtocol.isVersionCompatibleWithBucketedIntent(v2) )
        MethodArguments = this.getMethodArguments();
      else
        MethodArguments = this.setBundleExtras(new android.os.Bundle());
      PlatformActivityIntent = NativeProtocol.createPlatformActivityIntent(
                                 this.activity,
                                 this.appCall.getCallId().toString(),
                                 v1,
                                 v2,
                                 this.applicationName,
                                 MethodArguments);
      if ( PlatformActivityIntent == null )
      {
        FacebookDialog.access$500(
          this.activity,
          this.fragment,
          FacebookDialog.access$400(v1, MethodArguments.containsKey("com.facebook.platform.extra.PHOTOS"), false),
          "Failed");
        throw new com.facebook.FacebookException("Unable to create Intent; this likely means the Facebook app is not installed.");
      }
      FacebookDialog$PendingCall.access$600(this.appCall, PlatformActivityIntent);
      return new com.facebook.widget.FacebookDialog(this.activity, this.fragment, this.appCall, this.getOnPresentCallback(), null);
    }

    public boolean canPresent()
    {
      return FacebookDialog.access$800(this.activity, this.getDialogFeatures());
    }

    protected abstract com.gameloft.android.DecompRT.EnumSet getDialogFeatures();

    java.util.List<String> getImageAttachmentNames()
    {
      return new java.util.ArrayList(this.imageAttachments.keySet());
    }

    protected abstract android.os.Bundle getMethodArguments();

    com.facebook.widget.FacebookDialog$OnPresentCallback getOnPresentCallback()
    {
      return (com.facebook.widget.FacebookDialog$OnPresentCallback)new com.facebook.widget.FacebookDialog$Builder$1(this);
    }

    protected String getWebFallbackUrlInternal()
    {
      String v1;
      java.util.Iterator v2;
      com.facebook.widget.FacebookDialog$DialogFeature v3;
      String v4;
      String Action;
      com.facebook.internal.Utility$DialogFeatureConfig DialogFeatureConfig; // RETVAL
      android.net.Uri FallbackUrl;
      android.os.Bundle v9;
      v1 = null;
      v2 = this.getDialogFeatures().iterator();
      if ( v2.hasNext() )
      {
        v3 = (com.facebook.widget.FacebookDialog$DialogFeature)v2.next();
        v4 = v3.name();
        Action = v3.getAction();
      }
      else
      {
        Action = null;
        v4 = null;
      }
      DialogFeatureConfig = Utility.getDialogFeatureConfig(this.applicationId, Action, v4);
      if ( DialogFeatureConfig != null )
      {
        FallbackUrl = DialogFeatureConfig.getFallbackUrl();
        if ( FallbackUrl != null )
        {
          v9 = ServerProtocol.getQueryParamsForPlatformActivityIntentWebFallback(
                 this.activity,
                 this.appCall.getCallId().toString(),
                 NativeProtocol.getLatestKnownVersion(),
                 this.applicationName,
                 this.getMethodArguments());
          if ( v9 != null )
          {
            if ( FallbackUrl.isRelative() )
              FallbackUrl = Utility.buildUri(ServerProtocol.getDialogAuthority(), FallbackUrl.toString(), v9);
            return FallbackUrl.toString();
          }
        }
      }
      return v1;
    }

    protected void putExtra(android.os.Bundle p0, String p1, String p2)
    {
      if ( p2 != null )
        p0.putString(p1, p2);
    }

    public CONCRETE setApplicationName(String p0)
    {
      this.applicationName = p0;
      return (CONCRETE)this;
    }

    protected android.os.Bundle setBundleExtras(android.os.Bundle p0)
    {
      return p0;
    }

    public CONCRETE setFragment(android.support.v4.app.Fragment p0)
    {
      this.fragment = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setRequestCode(int p0)
    {
      FacebookDialog$PendingCall.access$000(this.appCall, p0);
      return (CONCRETE)this;
    }

    void validate()
    {
      ;
    }

}
