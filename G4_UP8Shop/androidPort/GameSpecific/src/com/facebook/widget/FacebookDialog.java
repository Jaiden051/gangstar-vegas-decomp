// Decompiled from classes.dex (SourceFile: FacebookDialog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.AppEventsLogger;
import com.facebook.Settings;
import com.facebook.internal.NativeProtocol;
import com.facebook.internal.Utility;
public class FacebookDialog {
    // Fields
    public static java.lang.String COMPLETION_GESTURE_CANCEL;
    private static java.lang.String EXTRA_DIALOG_COMPLETE_KEY;
    private static java.lang.String EXTRA_DIALOG_COMPLETION_GESTURE_KEY;
    private static java.lang.String EXTRA_DIALOG_COMPLETION_ID_KEY;
    public static java.lang.String RESULT_ARGS_DIALOG_COMPLETE_KEY;
    public static java.lang.String RESULT_ARGS_DIALOG_COMPLETION_GESTURE_KEY;
    public static java.lang.String RESULT_ARGS_DIALOG_COMPLETION_ID_KEY;
    private static com.facebook.NativeAppCallAttachmentStore attachmentStore;
    private android.app.Activity activity;
    private com.facebook.widget.FacebookDialog$PendingCall appCall;
    private android.support.v4.app.Fragment fragment;
    private com.facebook.widget.FacebookDialog$OnPresentCallback onPresentCallback;

    // Methods
    private FacebookDialog(
            android.app.Activity p0,
            android.support.v4.app.Fragment p1,
            com.facebook.widget.FacebookDialog$PendingCall p2,
            com.facebook.widget.FacebookDialog$OnPresentCallback p3)
    {
      super();
      this.activity = p0;
      this.fragment = p1;
      this.appCall = p2;
      this.onPresentCallback = p3;
    }

    /* synthetic */ FacebookDialog(
            android.app.Activity p0,
            android.support.v4.app.Fragment p1,
            com.facebook.widget.FacebookDialog$PendingCall p2,
            com.facebook.widget.FacebookDialog$OnPresentCallback p3,
            com.facebook.widget.FacebookDialog$1 p4)
    {
      this(p0, p1, p2, p3);
    }

    /* synthetic */ static String access$100(Iterable p0)
    {
      return getActionForFeatures(p0);
    }

    /* synthetic */ static int[] access$200(String p0, String p1, Iterable p2)
    {
      return getVersionSpecForFeatures(p0, p1, p2);
    }

    /* synthetic */ static int access$300(android.content.Context p0, String p1, int[] p2)
    {
      return getProtocolVersionForNativeDialog(p0, p1, p2);
    }

    /* synthetic */ static String access$400(String p0, boolean p1, boolean p2)
    {
      return getEventName(p0, p1, p2);
    }

    /* synthetic */ static void access$500(
            android.app.Activity p0,
            android.support.v4.app.Fragment p1,
            String p2,
            String p3)
    {
      logDialogActivity(p0, p1, p2, p3);
    }

    /* synthetic */ static boolean access$800(android.content.Context p0, Iterable p1)
    {
      return handleCanPresent(p0, p1);
    }

    /* synthetic */ static com.facebook.NativeAppCallAttachmentStore access$900()
    {
      return getAttachmentStore();
    }

    public static boolean canPresentMessageDialog(
            android.content.Context p0,
            com.facebook.widget.FacebookDialog$MessageDialogFeature[] p1)
    {
      return handleCanPresent(p0, com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$MessageDialogFeature.MESSAGE_DIALOG, p1));
    }

    public static boolean canPresentOpenGraphActionDialog(
            android.content.Context p0,
            com.facebook.widget.FacebookDialog$OpenGraphActionDialogFeature[] p1)
    {
      return handleCanPresent(p0, com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$OpenGraphActionDialogFeature.OG_ACTION_DIALOG, p1));
    }

    public static boolean canPresentOpenGraphMessageDialog(
            android.content.Context p0,
            com.facebook.widget.FacebookDialog$OpenGraphMessageDialogFeature[] p1)
    {
      return handleCanPresent(p0, com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$OpenGraphMessageDialogFeature.OG_MESSAGE_DIALOG, p1));
    }

    public static boolean canPresentShareDialog(
            android.content.Context p0,
            com.facebook.widget.FacebookDialog$ShareDialogFeature[] p1)
    {
      return handleCanPresent(p0, com.gameloft.android.DecompRT.EnumSet.of(FacebookDialog$ShareDialogFeature.SHARE_DIALOG, p1));
    }

    private static String getActionForFeatures(
            Iterable<? extends com.facebook.widget.FacebookDialog$DialogFeature> p0)
    {
      String v1;
      java.util.Iterator v2;
      v1 = null;
      v2 = p0.iterator();
      if ( v2.hasNext() )
        return ((com.facebook.widget.FacebookDialog$DialogFeature)v2.next()).getAction();
      return v1;
    }

    private static com.facebook.NativeAppCallAttachmentStore getAttachmentStore()
    {
      if ( attachmentStore == null )
        attachmentStore = new com.facebook.NativeAppCallAttachmentStore();
      return attachmentStore;
    }

    private static String getEventName(android.content.Intent p0)
    {
      boolean v1;
      String StringExtra;
      boolean hasExtra;
      android.os.Bundle BundleExtra; // RETVAL
      android.os.Bundle v5;
      java.util.ArrayList StringArrayList;
      String String;
      boolean v8;
      v1 = true;
      StringExtra = p0.getStringExtra("com.facebook.platform.protocol.PROTOCOL_ACTION");
      hasExtra = p0.hasExtra("com.facebook.platform.extra.PHOTOS");
      BundleExtra = p0.getBundleExtra("com.facebook.platform.protocol.METHOD_ARGS");
      v5 = BundleExtra;
      if ( BundleExtra != null )
      {
        StringArrayList = BundleExtra.getStringArrayList("PHOTOS");
        String = v5.getString("VIDEO");
        if ( StringArrayList != null && !StringArrayList.isEmpty() )
          hasExtra = true;
        if ( String == null || String.isEmpty() )
        {
          v1 = false;
          v8 = hasExtra;
        }
        else
        {
          v8 = hasExtra;
        }
      }
      else
      {
        v1 = false;
        v8 = hasExtra;
      }
      return getEventName(StringExtra, v8, v1);
    }

    private static String getEventName(String p0, boolean p1, boolean p2)
    {
      if ( p0.equals("com.facebook.platform.action.request.FEED_DIALOG") )
      {
        if ( p2 )
        {
          return "fb_dialogs_present_share_video";
        }
        else if ( p1 )
        {
          return "fb_dialogs_present_share_photo";
        }
        else
        {
          return "fb_dialogs_present_share";
        }
      }
      else if ( p0.equals("com.facebook.platform.action.request.MESSAGE_DIALOG") )
      {
        if ( p1 )
          return "fb_dialogs_present_message_photo";
        else
          return "fb_dialogs_present_message";
      }
      else if ( p0.equals("com.facebook.platform.action.request.OGACTIONPUBLISH_DIALOG") )
      {
        return "fb_dialogs_present_share_og";
      }
      else if ( p0.equals("com.facebook.platform.action.request.OGMESSAGEPUBLISH_DIALOG") )
      {
        return "fb_dialogs_present_message_og";
      }
      else
      {
        if ( !p0.equals("com.facebook.platform.action.request.LIKE_DIALOG") )
          throw new com.facebook.FacebookException("An unspecified action was presented");
        return "fb_dialogs_present_like";
      }
    }

    public static String getNativeDialogCompletionGesture(android.os.Bundle p0)
    {
      if ( p0.containsKey("completionGesture") )
        return p0.getString("completionGesture");
      else
        return p0.getString("com.facebook.platform.extra.COMPLETION_GESTURE");
    }

    public static boolean getNativeDialogDidComplete(android.os.Bundle p0)
    {
      if ( p0.containsKey("didComplete") )
        return p0.getBoolean("didComplete");
      else
        return p0.getBoolean("com.facebook.platform.extra.DID_COMPLETE", false);
    }

    public static String getNativeDialogPostId(android.os.Bundle p0)
    {
      if ( p0.containsKey("postId") )
        return p0.getString("postId");
      else
        return p0.getString("com.facebook.platform.extra.POST_ID");
    }

    private static int getProtocolVersionForNativeDialog(android.content.Context p0, String p1, int[] p2)
    {
      return NativeProtocol.getLatestAvailableProtocolVersionForAction(p0, p1, p2);
    }

    private static int[] getVersionSpecForFeature(String p0, String p1, com.facebook.widget.FacebookDialog$DialogFeature p2)
    {
      com.facebook.internal.Utility$DialogFeatureConfig DialogFeatureConfig; // RETVAL
      int[] v4;
      DialogFeatureConfig = Utility.getDialogFeatureConfig(p0, p1, p2.name());
      if ( DialogFeatureConfig != null )
        return DialogFeatureConfig.getVersionSpec();
      v4 = new int[1];
      v4[0] = p2.getMinVersion();
      return (int[])v4;
    }

    private static int[] getVersionSpecForFeatures(String p0, String p1, Iterable<? extends com.facebook.widget.FacebookDialog$DialogFeature> p2)
    {
      java.util.Iterator v3;
      int[] v4;
      v3 = p2.iterator();
      v4 = null;
      while ( v3.hasNext() )
        v4 = Utility.intersectRanges(
               v4,
               getVersionSpecForFeature(p0, p1, (com.facebook.widget.FacebookDialog$DialogFeature)v3.next()));
      return (int[])v4;
    }

    public static boolean handleActivityResult(
            android.content.Context p0,
            com.facebook.widget.FacebookDialog$PendingCall p1,
            int p2,
            android.content.Intent p3,
            com.facebook.widget.FacebookDialog$Callback p4)
    {
      android.os.Bundle ErrorDataFromResultIntent;
      if ( p2 != p1.getRequestCode() )
        return false;
      if ( attachmentStore != null )
        attachmentStore.cleanupAttachmentsForCall(p0, p1.getCallId());
      if ( p4 != null )
      {
        if ( NativeProtocol.isErrorResult(p3) )
        {
          ErrorDataFromResultIntent = NativeProtocol.getErrorDataFromResultIntent(p3);
          p4.onError(p1, NativeProtocol.getExceptionFromErrorData(ErrorDataFromResultIntent), ErrorDataFromResultIntent);
        }
        else
        {
          p4.onComplete(p1, NativeProtocol.getSuccessResultsFromIntent(p3));
        }
      }
      return true;
    }

    private static boolean handleCanPresent(
            android.content.Context p0,
            Iterable<? extends com.facebook.widget.FacebookDialog$DialogFeature> p1)
    {
      String ActionForFeatures;
      String ApplicationId;
      ActionForFeatures = getActionForFeatures(p1);
      ApplicationId = Settings.getApplicationId();
      if ( Utility.isNullOrEmpty(ApplicationId) )
        ApplicationId = Utility.getMetadataApplicationId(p0);
      return getProtocolVersionForNativeDialog(
               p0,
               ActionForFeatures,
               getVersionSpecForFeatures(ApplicationId, ActionForFeatures, p1)) != -1;
    }

    private static void logDialogActivity(
            android.app.Activity p0,
            android.support.v4.app.Fragment p1,
            String p2,
            String p3)
    {
      com.facebook.AppEventsLogger v4; // RETVAL
      android.os.Bundle v5;
      if ( p1 != null )
        p0 = p1.getActivity();
      v4 = AppEventsLogger.newLogger(p0);
      v5 = new android.os.Bundle();
      v5.putString("fb_dialog_outcome", p3);
      v4.logSdkEvent(p2, null, v5);
    }

    public com.facebook.widget.FacebookDialog$PendingCall present()
    {
      logDialogActivity(this.activity, this.fragment, getEventName(this.appCall.getRequestIntent()), "Completed");
      if ( this.onPresentCallback != null )
      {
        try
        {
          this.onPresentCallback.onPresent(this.activity);
        }
        catch ( Exception v2 )
        {
          throw new com.facebook.FacebookException(v2);
        }
      }
      if ( this.fragment != null )
        this.fragment.startActivityForResult(this.appCall.getRequestIntent(), this.appCall.getRequestCode());
      else
        this.activity.startActivityForResult(this.appCall.getRequestIntent(), this.appCall.getRequestCode());
      return this.appCall;
    }

}
