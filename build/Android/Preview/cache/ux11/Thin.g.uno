[Uno.Compiler.UxGenerated]
public partial class Thin: Fuse.Controls.Text
{
    static Thin()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Thin()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 20f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.Color = Fuse.Drawing.Colors.White;
        this.Font = global::SignupOrLogin.Thin;
    }
}
