[Uno.Compiler.UxGenerated]
public partial class SignupOrLogin: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [global::Uno.UX.UXGlobalResource("Medium")] public static readonly Fuse.Font Medium;
    [global::Uno.UX.UXGlobalResource("Light")] public static readonly Fuse.Font Light;
    [global::Uno.UX.UXGlobalResource("Thin")] public static readonly Fuse.Font Thin;
    [global::Uno.UX.UXGlobalResource("byjente")] public static readonly Fuse.Resources.FileImageSource byjente;
    internal Fuse.Reactive.EventBinding temp_eb2;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static SignupOrLogin()
    {
        Medium = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Roboto-Medium.ttf")));
        Light = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Roboto-Light.ttf")));
        Thin = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Roboto-Thin.ttf")));
        byjente = new Fuse.Resources.FileImageSource();
        global::Uno.UX.Resource.SetGlobalKey(Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(byjente, "byjente");
        byjente.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/back.jpeg"));
    }
    [global::Uno.UX.UXConstructor]
    public SignupOrLogin(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.iOS.StatusBarConfig();
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.Controls.Rectangle();
        var temp5 = new Fuse.Controls.Rectangle();
        var temp6 = new Light();
        var temp7 = new Fuse.Controls.Image();
        var temp8 = new Fuse.Controls.Rectangle();
        var temp9 = new Fuse.Controls.Button();
        var temp10 = new Medium();
        var temp11 = new Fuse.Gestures.WhilePressed();
        var temp12 = new Fuse.Animations.Scale();
        temp_eb2 = new Fuse.Reactive.EventBinding("loginClicked");
        var temp13 = new Fuse.Controls.Button();
        var temp14 = new Medium();
        var temp15 = new Fuse.Gestures.WhilePressed();
        var temp16 = new Fuse.Animations.Scale();
        temp.LineNumber = 3;
        temp.FileName = "SignupOrLogin.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../SignupOrLogin.js"));
        temp1.IsVisible = true;
        temp1.Style = Fuse.Platform.StatusBarStyle.Light;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp2.Children.Add(temp8);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp4.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp4.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
        temp4.Alignment = Fuse.Elements.Alignment.Top;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp7);
        temp5.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp5.Children.Add(temp6);
        temp6.Value = "Deliveries re-imagined. Move the world with Moover";
        temp6.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp7.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp7.Source = global::SignupOrLogin.byjente;
        temp8.Background = Fuse.Drawing.Brushes.Transparent;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp13);
        temp9.Color = Fuse.Drawing.Colors.Black;
        temp9.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp9.Height = new Uno.UX.Size(10f, Uno.UX.Unit.Percent);
        temp9.Alignment = Fuse.Elements.Alignment.BottomLeft;
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb2.OnEvent);
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp9.Bindings.Add(temp_eb2);
        temp10.Value = "LOG IN";
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp11.Animators.Add(temp12);
        temp12.Factor = 0.9f;
        temp12.Easing = Fuse.Animations.Easing.BounceIn;
        temp12.EasingBack = Fuse.Animations.Easing.BounceOut;
        temp13.Color = float4(0.1803922f, 0.8f, 0.4431373f, 1f);
        temp13.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp13.Height = new Uno.UX.Size(10f, Uno.UX.Unit.Percent);
        temp13.Alignment = Fuse.Elements.Alignment.BottomRight;
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp14.Value = "SIGN UP";
        temp14.TextColor = Fuse.Drawing.Colors.White;
        temp14.Alignment = Fuse.Elements.Alignment.Center;
        temp15.Animators.Add(temp16);
        temp16.Factor = 0.9f;
        temp16.EasingBack = Fuse.Animations.Easing.BounceOut;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
