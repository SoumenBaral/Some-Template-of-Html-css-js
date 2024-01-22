document.getElementById('downloadButton').addEventListener('click', () => {
    const element = document.getElementById('pdfContent');

    html2pdf(element, {
      margin: 10,
      filename: 'your_cv.pdf',
      image: { type: 'jpeg', quality: 0.98 },
      html2canvas: { scale: 2 },
      jsPDF: { unit: 'mm', format: 'a4', orientation: 'portrait' }
    });
  });